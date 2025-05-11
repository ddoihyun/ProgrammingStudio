import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J044();
    }

    void J044() {
        Scanner s = new Scanner(System.in);
        MakePW pw = new MakePW();
        System.out.print("Enter the length of the password: ");
        int length = s.nextInt();
        pw.make(length);
        s.close();
    }
}