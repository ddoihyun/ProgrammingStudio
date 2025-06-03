import java.io.*;
import java.util.*;

public class ScoreManager {
    // key = 학생 이름, value = Score 객체
    private HashMap<String, Score> map = new HashMap<>();

    // 1) 데이터 파일로부터 읽어서 HashMap에 저장
    public void loadData(String filename) {
        try (BufferedReader br = new BufferedReader(new FileReader(filename))) {
            String line;
            while ((line = br.readLine()) != null) {
                if (line.trim().isEmpty()) continue;
                String[] t = line.split("\\s+");
                String name = t[0];
                int kor = Integer.parseInt(t[1]);
                int eng = Integer.parseInt(t[2]);
                int mat = Integer.parseInt(t[3]);
                map.put(name, new Score(name, kor, eng, mat));
            }
        } catch (Exception e) {
            System.out.println("데이터 로드 오류: " + e.getMessage());
        }
    }

    // 2) 학생별·과목별 통계 출력
    public void printStatistics() {
        if (map.isEmpty()) {
            System.out.println("등록된 학생이 없습니다.");
            return;
        }

        // 학생별 통계
        System.out.println("=== Each student score ===");
        for (Score s : map.values()) {
            System.out.printf("%s: Total = %d, Average = %.2f%n",
                              s.getName(), s.getSum(), s.getAvg());
        }

        // 과목별 통계
        int totalKor = 0, totalEng = 0, totalMat = 0;
        for (Score s : map.values()) {
            totalKor += s.getKor();
            totalEng += s.getEng();
            totalMat += s.getMat();
        }
        int n = map.size();
        System.out.println("=== Subject total and average: ===");
        System.out.printf("Korean: Total = %d, Average = %.2f%n",
                          totalKor, totalKor / (double)n);
        System.out.printf("English: Total = %d, Average = %.2f%n",
                          totalEng, totalEng / (double)n);
        System.out.printf("Math: Total=%d, Average = %.2f%n",
                          totalMat, totalMat / (double)n);
    }

    // 3) 학생 검색 기능
    public void searchStudent(String name) {
        Score s = map.get(name);
        if (s != null) {
            System.out.println("검색 결과: " + s);
        } else {
            System.out.println(name + " 학생을 찾을 수 없습니다.");
        }
    }

    // 4) 학생 점수 수정 기능
    public void modifyScore(Scanner sc, String name) {
        Score s = map.get(name);
        if (s != null) {
            System.out.print("새 국어 점수> ");
            s.setKor(sc.nextInt());
            System.out.print("새 영어 점수> ");
            s.setEng(sc.nextInt());
            System.out.print("새 수학 점수> ");
            s.setMat(sc.nextInt());
            sc.nextLine();  // 버퍼 비우기
            System.out.println("수정 완료: " + s);
        } else {
            System.out.println(name + " 학생을 찾을 수 없습니다.");
        }
    }

    // 프로그램 메뉴 실행
    public void start(String filename) {
        loadData(filename);
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.println("\n===== 메뉴 =====");
            System.out.println("1. 점수 통계 출력");
            System.out.println("2. 학생 검색");
            System.out.println("3. 학생 점수 수정");
            System.out.println("4. 프로그램 종료");
            System.out.print("menu > ");
            String choice = sc.nextLine();

            switch (choice) {
                case "1": printStatistics(); break;
                case "2":
                    System.out.print("검색할 학생 이름> ");
                    searchStudent(sc.nextLine());
                    break;
                case "3":
                    System.out.print("수정할 학생 이름> ");
                    modifyScore(sc, sc.nextLine());
                    break;
                case "4":
                    System.out.println("프로그램을 종료합니다.");
                    sc.close();
                    return;
                default:
                    System.out.println("잘못된 선택입니다.");
            }
        }
    }
}
