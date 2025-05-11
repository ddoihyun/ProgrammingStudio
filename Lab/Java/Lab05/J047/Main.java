import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J047();
    }

    void J047() {
        Scanner s = new Scanner(System.in);

        String str = s.nextLine();
        String result = MyString.removeSpaces(str);

        System.out.println(result);
        s.close();
    }
}