import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J048();
    }

    void J048() {
        Scanner s = new Scanner(System.in);

        String str = s.nextLine();
        String result = MyString.findLongestWord(str);

        System.out.println(result + " " + result.length());
        s.close();
    }
}