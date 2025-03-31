import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J014();
    }

    void J014() {
        int income;         // 연봉 (원 단위)
        double tax;         // 소득세 (원 단위)

        Scanner s = new Scanner(System.in);
        income = s.nextInt(); 
        if (income <= 10000000) tax = income * 0.095;
        else if(income <= 40000000) tax = income * 0.19;
        else if(income <= 80000000) tax = income * 0.28;
        else tax =income * 0.37;
        System.out.printf("%.0f\n", tax);
    }
}
