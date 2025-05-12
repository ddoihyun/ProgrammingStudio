import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J051();
    }

    void J051() {
        Scanner s = new Scanner(System.in);
        MakePW pw = new MakePW();
        System.out.print("Enter the length of the password: ");
        int length = s.nextInt();
        System.out.print("Enter the amount of the password: ");
        int amount = s.nextInt();
        String[] results = pw.make(length, amount);
        for(int i=0; i<results.length; i++){
            System.out.println(results[i]);
        }
        s.close();
    }
}