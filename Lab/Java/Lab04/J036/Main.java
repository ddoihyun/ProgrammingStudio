import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J036();
    }

    void J036() {        
        Scanner s = new Scanner(System.in);
        boolean isPalindrome = true;
        String str = s.nextLine();
        String str_String = "";

        for(int i=0; i<str.length(); i++){
            char ch = str.charAt(i);
            if (Character.isLetter(ch))
                str_String += str.charAt(i);
        }
        str_String = str_String.toLowerCase();
        for(int i=0; i<str_String.length()/2; i++){
            if(str_String.charAt(i) != str_String.charAt(str_String.length()-1-i)){
                isPalindrome = false;
                break;
            }
        }

        if(isPalindrome) System.out.println("Yes");
        else System.out.println("No");

        s.close();
    }
}