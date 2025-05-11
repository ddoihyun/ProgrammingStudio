// import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J042();
    }

    void J042() {
        // Scanner s = new Scanner(System.in);
        Lotto lotto = new Lotto();
        // s.close();
        lotto.printNumbers();
        lotto.remake();
        lotto.printNumbers();
    }
}
