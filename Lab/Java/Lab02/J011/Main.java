import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J011();
    }

    void J011() {
        int weight, height;
        double bmi;
        Scanner s = new Scanner(System.in);
        height = s.nextInt();
        weight = s.nextInt();

        bmi = weight / ((double)height*0.01 * (double)height*0.01);
        s.close();
        if(bmi >= 25) System.out.println("Yes");
        else System.out.println("No");
    }
}