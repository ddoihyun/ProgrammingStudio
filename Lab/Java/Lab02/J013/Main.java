import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J013();
    }

    void J013() {
        int kor, eng, math; // 국어, 영어, 수학 점수
        int total;          // 총점
        double average;     // 평균

        Scanner s = new Scanner(System.in);
        kor = s.nextInt();
        eng = s.nextInt();
        math = s.nextInt();
        total = kor + eng + math;
        average = total / 3.0;

        System.out.printf("%d %.1f\n", total, average);
        s.close();
        if(kor >= 70) System.out.println("Kor - Pass");
        else System.out.println("Kor - Fail");
        if(eng >= 70) System.out.println("Eng - Pass");
        else System.out.println("Eng - Fail");
        if(math >= 70) System.out.println("Math - Pass");
        else System.out.println("Math - Fail");
    }
}
