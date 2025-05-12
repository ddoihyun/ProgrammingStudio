import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J053();
    }

    void J053() {
        Scanner s = new Scanner(System.in);
        Score score = new Score(5);
        score.getScore();
        System.out.printf("Enter the number of student(1~5) > ");
        int num = s.nextInt();
        score.printScore(num);

        s.close();
    }
}