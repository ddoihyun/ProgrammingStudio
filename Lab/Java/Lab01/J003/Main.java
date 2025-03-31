import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J003();
    }

    void J003(){
        double m2_area;         // 면적(제곱미터)
        double pyung_area;      // 면적(평 수)
        Scanner s = new Scanner(System.in);
        m2_area = s.nextDouble();
        pyung_area = m2_area / 3.305;
        System.out.printf("%.1f\n",pyung_area);
    }
}