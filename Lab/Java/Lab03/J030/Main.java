import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String[] names = {"James", "David", "Simon", "Peter", "Jason"};
        int[] answer = {1, 2, 3, 4, 1, 2, 3, 4, 3, 2};

        String first = "1st : ";
        String second = "2nd : ";
        String fail = "Fail : ";
        int count1 = 0, count2 = 0, countF = 0;

        Scanner s = new Scanner(System.in);

        for (int i = 0; i < 5; i++) {
            int score = 0;
            for (int j = 0; j < 10; j++) {
                int ans = s.nextInt();
                if (ans == answer[j]) score++;
            }
            if (score >= 9) {
                first += names[i] + " ";
                count1++;
            } 
            else if (score >= 7) {
                second += names[i] + " ";
                count2++;
            } 
            else {
                fail += names[i] + " ";
                countF++;
            }
        }

        System.out.println(first + "(" + count1 + ")");
        System.out.println(second + "(" + count2 + ")");
        System.out.println(fail + "(" + countF + ")");

        s.close();
    }
}
