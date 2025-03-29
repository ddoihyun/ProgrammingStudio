import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J004();
    }

    void J004() {
        double x1, y1;      // 첫 번째 좌표 값
        double x2, y2;      // 두 번째 좌표 값

        Scanner s = new Scanner(System.in);
        x1 = s.nextDouble();
        y1 = s.nextDouble();
        x2 = s.nextDouble();
        y2 = s.nextDouble();

        double distance = Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2));
        System.out.printf("%.1f\n", distance);
    }
}