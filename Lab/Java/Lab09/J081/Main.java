import java.io.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J081();
    }

    void J081() {
        try {
            File file = new File("data.txt");
            Scanner scanner = new Scanner(file);

            int max = Integer.MIN_VALUE;
            int min = Integer.MAX_VALUE;

            while (scanner.hasNextInt()) {
                int num = scanner.nextInt();
                if (num > max) max = num;
                if (num < min) min = num;
            }

            System.out.println("Maximum number: " + max);
            System.out.println("Minimum number: " + min);

            scanner.close();
        } catch (FileNotFoundException e) {
            System.out.println("파일을 찾을 수 없습니다.");
        }
    }
}
