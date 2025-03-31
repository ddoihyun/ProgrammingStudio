import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J014();
    }

    void J014() {
        int num1, num2, num3;   // 첫 번째 숫자, 두 번째 숫자, 세 번째 숫자
        int max_num, min_num;   // 최대값, 최소값

        Scanner s = new Scanner(System.in);
        num1 = s.nextInt(); 
        num2 = s.nextInt(); 
        num3 = s.nextInt(); 

    // max_num
    if (num1 >= num2 && num1 >= num3) max_num = num1;
    else if (num2 >= num1 && num2 >= num3) max_num = num2;
    else max_num = num3;

    // min_num
    if (num1 <= num2 && num1 <= num3) min_num = num1;
    else if (num2 <= num1 && num2 <= num3) min_num = num2;
    else min_num = num3;

    System.out.printf("%d %d\n", max_num, min_num);
    s.close(); 
    }
}
