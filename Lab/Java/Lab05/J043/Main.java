// import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J043();
    }

    void J043() {
        Lotto lotto = new Lotto();

        int[] result = lotto.GetNumbers();              // 당첨 번호
        // lotto.printNumbers();
        int[] checkNumbers = lotto.remake();            // 사용자 입력
        System.out.print("입력한 번호: ");
        lotto.printNumbers(checkNumbers);               // 사용자 번호 출력

        System.out.print("당첨 복권 번호: ");
        lotto.printNumbers(result);                     // 당첨 번호 출력

        int matched = lotto.checkLotto(checkNumbers);   // 번호 비교
        if (matched == 6) System.out.println("결과: 1등");
        else if (matched == 5) System.out.println("결과: 2등");
        else if (matched == 4) System.out.println("결과: 3등");
        else System.out.println("결과: 낙첨 (" + matched + "개 일치)");
    }
}
