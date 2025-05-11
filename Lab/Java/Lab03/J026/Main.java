import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J026();
    }

    void J026() {
        int number;             // 입력받을 숫자의 수
        int max_num = Integer.MIN_VALUE, min_num = Integer.MAX_VALUE;   // 가장 큰 숫자, 가장 작은 숫자
        int new_num;

        Scanner s = new Scanner(System.in);
        number = s.nextInt();
        for(int i=0; i<number; i++){
            new_num = s.nextInt();
            if(new_num > max_num) max_num = new_num;
            if(new_num < min_num) min_num = new_num;
        }
        System.out.println("가장 큰 수 " + max_num);
        System.out.println("가장 작은 수 " + min_num);
        s.close();
    }
}