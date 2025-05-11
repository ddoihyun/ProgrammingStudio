import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J037();
    }

    void J037() {
        Scanner s = new Scanner(System.in);
        String s1 = s.nextLine();
        String s2 = s.nextLine();
        int[] abc_count1 = new int[26];
        int[] abc_count2 = new int[26];

        for(int i=0; i<s1.length(); i++){
            if(Character.isAlphabetic(s1.charAt(i))){
                int index = (int)s1.charAt(i) - (int)'a';
                abc_count1[index]++;
            }
        }
        for(int i=0; i<s2.length(); i++){
            if(Character.isAlphabetic(s2.charAt(i))){
                int index = (int)s2.charAt(i) - (int)'a';
                abc_count2[index]++;
            }
        }

        if(Arrays.equals(abc_count1, abc_count2))
            System.out.println("Yes");
        else System.out.println("No");

        s.close();
    }
}