import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J001();
    }

    void J001() {
        int weight, height;
        double bmi;
        Scanner s = new Scanner(System.in);
        height = s.nextInt();
        weight = s.nextInt();

        bmi = weight / ((double)height*0.01 * (double)height*0.01);
        System.out.printf("%.1f\n", bmi);
        s.close();
    }
}