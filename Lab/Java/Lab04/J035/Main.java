import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J035();
    }

    void J035() {
        Scanner s = new Scanner(System.in);
        String birthdate = s.nextLine();
        // int year = birthdate / 10000;
        // int month = (birthdate / 100) % 100;
        // int day = birthdate % 100;

        int result = 0;
        // int year = Integer.parseInt(birthdate.substring(0, 4));
        int month = Integer.parseInt(birthdate.substring(4, 6));
        int day = Integer.parseInt(birthdate.substring(6, 8));
        for(int i=0; i<4; i++){
            result += Character.getNumericValue(birthdate.charAt(i));
        }
        result = result + month + day;

        System.out.println(result);
        s.close();
    }
}