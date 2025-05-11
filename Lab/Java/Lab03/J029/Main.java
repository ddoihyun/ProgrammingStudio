import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J029();
    }

    void J029() {
        int[] number = new int[10];         // 사용자가 입력한 숫자 10개
        int count = 0;                          // 현재까지 입력된 숫자의 개수(0~10)
        int newnum;
        boolean flag;
        Scanner s = new Scanner(System.in);
        while(count < 10) {
            flag = true;
            System.out.printf("Enter #%d number > ", count+1);
            newnum = s.nextInt();
            for(int i=0; i<count; i++) {
                if(number[i] == newnum) {
                    System.out.println("Duplicated! Retry.");
                    flag = false;
                    break;
                }
            }
            if(flag){
                number[count] = newnum;
                count++;
            }
            
        }

        System.out.printf("Numbers - ");
        for(int i=0; i<count; i++) {
            System.out.printf("%d ", number[i]);
        }
        System.out.println();
    }
}