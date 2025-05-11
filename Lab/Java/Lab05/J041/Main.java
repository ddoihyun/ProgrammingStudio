// import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J041();
    }

    void J041() {
        Lotto lotto = new Lotto();      
        lotto.printNumbers();           

        lotto.remakeAuto();             
        lotto.printNumbers();           
    }
}