import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;

public class ScoreManager {
    private ArrayList<Score> students = new ArrayList<>();

    public void loadScores(String filename) {
        try {
            Scanner scanner = new Scanner(new File(filename));

            while (scanner.hasNext()) {
                String name = scanner.next();
                int kor = scanner.nextInt();
                int eng = scanner.nextInt();
                int mat = scanner.nextInt();
                students.add(new Score(name, kor, eng, mat));
            }

            scanner.close();
        } catch (FileNotFoundException e) {
            System.out.println("파일을 찾을 수 없습니다.");
        }
    }

    public void printSubjectStats() {
        int korTotal = 0, engTotal = 0, matTotal = 0;

        for (Score s : students) {
            korTotal += s.getKor();
            engTotal += s.getEng();
            matTotal += s.getMat();
        }

        int count = students.size();

        System.out.println("Subject total and average:");
        System.out.printf("Korean: Total = %d, Avg = %.2f%n", korTotal, korTotal / (double) count);
        System.out.printf("English: Total = %d, Avg = %.2f%n", engTotal, engTotal / (double) count);
        System.out.printf("Math: Total = %d, Avg = %.2f%n", matTotal, matTotal / (double) count);
    }

    public void printStudentStats() {
        System.out.println("\nEach student score:");
        for (Score s : students) {
            System.out.println(s);
        }
    }

    public void printTopStudent() {
        if (students.isEmpty()) {
            System.out.println("학생 정보가 없습니다.");
            return;
        }

        Score top = students.get(0);

        for (Score s : students) {
            if (s.getAvg() > top.getAvg()) {
                top = s;
            }
        }

        System.out.printf("\nTop student: %s - Average: %.2f%n", top.getName(), top.getAvg());
    }
}
