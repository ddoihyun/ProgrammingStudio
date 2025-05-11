import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J024();
    }

    void J024() {
        int[] numbers = new int[10];        // 10개의 숫자
        int first = Integer.MIN_VALUE;      // 첫 번째로 큰 수
        int second = Integer.MIN_VALUE;     // 두 번째로 큰 수
        int second_max_index = 0;           // 두 번째로 큰 수의 인덱스

        Scanner s = new Scanner(System.in);
        for(int i=0; i<10; i++){
            numbers[i] = s.nextInt();
        }

        // first    
        for (int i=0; i<10; i++) {
            if (numbers[i] > first) {
                first = numbers[i];
            }
        }

        // second
        for (int i=0; i<10; i++) {
            if (numbers[i] > second && numbers[i] < first) {
                second = numbers[i];
                second_max_index = i;
            }
        }
        
        System.out.printf("[%d] %d\n", second_max_index+1, second);
    }
}
