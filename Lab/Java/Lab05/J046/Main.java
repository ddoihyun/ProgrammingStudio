import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J046();
    }

    void J046() {
        Scanner s = new Scanner(System.in);
        String str1 = s.nextLine();
        String str2 = s.nextLine();

        int result = MyString.whichFirst(str1, str2); // static으로 명시되어 있으므로
        if(result == 1) System.out.println("1 " + str1);
        else System.out.println("2 " + str2);
        
        s.close();
    }
}