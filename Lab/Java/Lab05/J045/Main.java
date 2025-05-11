import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J045();
    }

    void J045() {
        Scanner s = new Scanner(System.in);
        MakePW pw = new MakePW();             
        System.out.print("Enter the length of the password (digit / alphabet): ");
        int digit = s.nextInt();
        int alphabet = s.nextInt();
        pw.makeCode(digit, alphabet);    
        s.close();                
    }
}