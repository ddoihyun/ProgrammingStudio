import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J031();
    }

    void J031() {
        String userid;      // 입력받은 ID
        String password;    // 입력받은 암호
        String name;        // 입력받은 이름

        Scanner s = new Scanner(System.in);
        userid = s.nextLine();
        password = s.nextLine();
        name = s.nextLine();
        if(password.length() < 3) 
            System.out.println("Error! password is too short");
        else{
            System.out.println("User Id: " + userid);
            System.out.print("Password: ");
            for(int i=0; i<password.length(); i++){
                if(i > 2) System.out.print("*");
                else System.out.printf("%c", password.charAt(i));
            }
            System.out.println("\nUser Name:" + name);
        }
        s.close();        
    }
}