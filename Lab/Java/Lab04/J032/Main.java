import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J032();
    }

    void J032() {
        String str;     // 입력받은 문자열
        String reverse = ""; // 거꾸로 출력할 문자열

        Scanner s = new Scanner(System.in);
        str = s.nextLine();
        for(int i=0; i<str.length(); i++){
            reverse += str.charAt(str.length()-(i+1));
        }
        
        System.out.println(reverse);
        s.close();
    }
}