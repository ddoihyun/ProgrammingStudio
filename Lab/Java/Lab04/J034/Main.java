import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J034();
    }

    void J034() {
        String[] usernames = {"kim", "lee", "park", "hong", "choi"};
        String[] passwords = {"1111", "1234", "3456", "3535", "7777"};

        Scanner s = new Scanner(System.in);
        String username = s.nextLine();
        String password = s.nextLine();

        int result=-1, i=0;
        while(i<usernames.length){
            if(usernames[i].equals(username)){
                if(passwords[i].equals(password))
                    result = 1;
                else
                    result = 0;
                break;
            }
            i++;
        }

        if(result == 1)
            System.out.println("Login OK!");
        else if(result == 0)
            System.out.println("Incorrect Password!");
        else
            System.out.println("No user!");

        s.close();
    }
}