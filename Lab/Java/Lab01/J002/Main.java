import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J002();
    }

    void J002() {
        double c_degree;       // 섭씨 온도
        double f_degree;       // 화씨 온도 
        Scanner s = new Scanner(System.in);
        c_degree = s.nextDouble();
        f_degree = (c_degree * 1.8) + 32;   
        System.out.printf("%.1f\n", f_degree);    
    }
}
