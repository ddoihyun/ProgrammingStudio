import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J027();
    }

    void J027() {
        int[] height = new int[10];     // 10명의 신장(cm)
        int[] weight = new int[10];     // 10명의 체중(kg)
        double[] bmi = new double[10];   // 10명의 비만도 수치
        int count = 0;                      // 비만인 사람의 숫자

        Scanner s = new Scanner(System.in);
        int people = s.nextInt();
        for(int i = 0; i < people; i++) {
            height[i] = s.nextInt();
            weight[i] = s.nextInt();
            bmi[i] = (double) weight[i] / ((height[i] * 0.01) * (height[i] * 0.01)); 
        }

        System.out.printf("Overweight person - ");
        for(int i=0; i<people; i++) {
            if(bmi[i] >= 25){
                System.out.printf("%d ", i+1);
                count++;
            }
        }
        System.out.printf("\nTotal - %d\n", count);
        s.close();
    }
}