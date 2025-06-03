// SimpleChat Client
import java.net.*;
import java.io.*;

public class ChatClient {

    public static void main(String[] args) {
        if (args.length != 2) {
            System.out.println("Usage : java ChatClient [Username] [Server IP]");
            System.exit(1);
        }

        String username = args[0];
        String serverIP = args[1];

        Socket sock = null;
        BufferedReader br = null;
        PrintWriter pw = null;

        try {
            // 1) 서버에 접속
            sock = new Socket(serverIP, 10001);
            pw = new PrintWriter(sock.getOutputStream(), true);
            br = new BufferedReader(new InputStreamReader(sock.getInputStream()));

            // 2) 서버에 사용자 이름을 처음으로 전송
            pw.println(username);

            // 3) 서버로부터 오는 메시지를 처리하는 스레드 시작
            new InputThread(br).start();

            // 4) 사용자 입력(키보드)을 받아서 서버로 전송
            BufferedReader stdIn = new BufferedReader(new InputStreamReader(System.in));
            String input;
            while ((input = stdIn.readLine()) != null) {
                pw.println(input);
            }
        } catch (IOException e) {
            System.out.println("Client error: " + e);
        } finally {
            try {
                if (pw != null) pw.close();
                if (br != null) br.close();
                if (sock != null) sock.close();
            } catch (IOException e) { }
        }
    }
}

// 서버로부터 들어오는 메시지를 계속 읽어서 화면에 출력하는 스레드
class InputThread extends Thread {
    BufferedReader br;

    public InputThread(BufferedReader br) {
        this.br = br;
    }

    @Override
    public void run() {
        String msg;
        try {
            while ((msg = br.readLine()) != null) {
                System.out.println(msg);
            }
        } catch (IOException e) {
            System.out.println("Connection closed.");
        }
    }
}
