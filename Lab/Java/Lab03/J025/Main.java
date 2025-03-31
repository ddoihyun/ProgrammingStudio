import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J025();
    }

    void J025() {
        // 1 ~ 12월의 날 수
        int[] monthdays = {31, 28, 30, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
        int month, day;    // 입력받은 월, 일
        int day_count = 0;     // 1년 중 날 수

        Scanner s = new Scanner(System.in);
        month = s.nextInt();
        day = s.nextInt();
        if(month < 1 || month > 12 || day < 0 || day > monthdays[month-1])
            System.out.println("Wrong date!");
        else{
            for(int i=0; i<month-1; i++)
                day_count += monthdays[i];
            day_count += day;
            System.out.printf("%d\n", day_count);
        }
    }
}