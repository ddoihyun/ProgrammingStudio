import java.io.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J084();
    }

    void J084() {
        try {
            Scanner scanner = new Scanner(new File("name.txt"));

            int count = 0;
            String longest = "";
            String shortest = null;

            while (scanner.hasNextLine()) {
                String line = scanner.nextLine().trim();
                if (line.isEmpty()) continue;

                count++;

                if (shortest == null || line.length() < shortest.length()) {
                    shortest = line;
                }
                if (line.length() > longest.length()) {
                    longest = line;
                }
            }

            scanner.close();

            System.out.println("Count : " + count);
            System.out.println("Longest name : " + longest);
            System.out.println("Shortest name : " + shortest);

        } catch (FileNotFoundException e) {
            System.out.println("파일을 찾을 수 없습니다.");
        }
    }
}
