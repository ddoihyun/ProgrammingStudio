
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J054();
    }

    void J054() {
        Scanner s = new Scanner(System.in);
        Score score = new Score(5);
        score.getScore();

        System.out.print("Enter the number(1~3) and name of class > ");
        int num = s.nextInt();
        String name = s.next();
        score.printScore(num-1, name);
        s.close();
    }
}