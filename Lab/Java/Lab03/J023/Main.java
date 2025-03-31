import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J023();
    }

    void J023() {
        int count;          // 입력받을 숫자의 개수
        int number;         // 입력받은 수
        int totalsum = 0;       // 합계
        double average;     // 평균 값

        Scanner s = new Scanner(System.in);
        count = s.nextInt();
        for(int i=0; i<count; i++){
            number = s.nextInt();
            totalsum += number;
        }
        average = totalsum / (double)count;
        System.out.printf("%d %.1f\n", totalsum, average);
    }
}