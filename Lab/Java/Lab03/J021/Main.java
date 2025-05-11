import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J021();
    }

    void J021() {
        int weight, height;
        double bmi;
        int all;
        int people = 0;
        Scanner s = new Scanner(System.in);
        all =s.nextInt();
        for(int i=0; i<all; i++){
            height = s.nextInt();
            weight = s.nextInt();
            bmi = weight / ((double)height*0.01 * (double)height*0.01);
            if(bmi >= 25) people ++;
        }

        s.close();
        System.out.println(people);
    }
}