import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J005();
    }

    void J005() {
        int month, day;      //  월, 일
        int day_count;       //  1년 중 날 수

        Scanner s = new Scanner(System.in);
        month = s.nextInt();
        day = s.nextInt();
        day_count = 0;
        for(int i=1; i<month; i++) {
            if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12) day_count += 31;
            else if(i==2) day_count += 28;
            else day_count += 30;
        }
        day_count += day;

        System.out.printf("%d\n", day_count);
    }
}