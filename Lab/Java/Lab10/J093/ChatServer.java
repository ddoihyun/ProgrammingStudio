// ChatServer.java
import java.net.*;
import java.io.*;
import java.util.*;

public class ChatServer {
    public static void main(String[] args) {
        ServerSocket server = null;
        // key: 접속한 사용자 ID, value: 해당 사용자의 PrintWriter
        HashMap<String, PrintWriter> hm = new HashMap<>();

        try {
            server = new ServerSocket(10001);
            System.out.println("Waiting Connections...");
            while (true) {
                Socket sock = server.accept();
                ChatThread chatthread = new ChatThread(sock, hm);
                chatthread.start();
            }
        } catch (IOException e) {
            System.out.println("Server error: " + e);
        } finally {
            if (server != null) {
                try {
                    server.close();
                } catch (IOException e) { }
            }
        }
    }
}

class ChatThread extends Thread {
    private Socket sock;
    private HashMap<String, PrintWriter> hm;
    private String id;                    // 클라이언트가 보낸 사용자 이름
    private BufferedReader br;
    private PrintWriter pw;

    public ChatThread(Socket sock, HashMap<String, PrintWriter> hm) {
        this.sock = sock;
        this.hm = hm;
        try {
            br = new BufferedReader(new InputStreamReader(sock.getInputStream()));
            pw = new PrintWriter(sock.getOutputStream(), true);
        } catch (IOException e) {
            System.out.println("Thread 생성 중 에러: " + e);
        }
    }

    @Override
    public void run() {
        try {
            // 1) 처음 접속 시 클라이언트가 보낸 사용자 이름(ID)을 읽는다.
            id = br.readLine();
            if (id == null) return;

            // 2) 서버 로그에 입장 메시지 출력
            System.out.println("[Server log] " + id + " entered.");

            // 3) HashMap에 사용자 이름과 PrintWriter를 저장
            synchronized (hm) {
                hm.put(id, pw);
            }

            // 4) 새로 들어온 사용자가 입장했음을 모든 클라이언트에게 브로드캐스트
            broadcast("[" + id + "]님이 입장했습니다.");

            // 5) 클라이언트로부터 들어오는 메시지를 처리
            String line;
            while ((line = br.readLine()) != null) {
                // "/userlist" 명령어가 오면 현재 접속자 목록을 보낸다.
                if (line.equals("/userlist")) {
                    sendUserList();
                }
                // 그 외 일반 채팅 메시지이면 브로드캐스트
                else {
                    broadcast("[" + id + "] " + line);
                }
            }
        } catch (IOException e) {
            System.out.println("ChatThread 에러: " + e);
        } finally {
            // 클라이언트가 나갈 때: HashMap에서 제거하고 퇴장 메시지 브로드캐스트
            synchronized (hm) {
                if (id != null) {
                    hm.remove(id);
                }
            }

            // 서버 로그에 퇴장 메시지 출력
            System.out.println("[Server log] " + id + " exited.");

            broadcast("[" + id + "] 님이 퇴장했습니다.");

            try {
                if (br != null) br.close();
                if (pw != null) pw.close();
                if (sock != null) sock.close();
            } catch (IOException e) { }
        }
    }

    // 모든 클라이언트에게 메시지를 보낸다.
    public void broadcast(String msg) {
        synchronized (hm) {
            for (PrintWriter writer : hm.values()) {
                writer.println(msg);
            }
        }
    }

    // "/userlist" 요청을 보낸 클라이언트에게 현재 접속자 목록을 전송
    public void sendUserList() {
        StringBuilder sb = new StringBuilder();
        List<String> userList;
        synchronized (hm) {
            userList = new ArrayList<>(hm.keySet());
        }
        sb.append("현재 접속자 (").append(userList.size()).append("명): ");
        for (int i = 0; i < userList.size(); i++) {
            sb.append(userList.get(i));
            if (i < userList.size() - 1) {
                sb.append(", ");
            }
        }
        // 자신의 PrintWriter(pw)로만 전송
        pw.println(sb.toString());
    }
}
