import java.io.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J085();
    }

    void J085() {
        int upperCount = 0;
        int lowerCount = 0;
        int spaceCount = 0;

        try {
            Scanner scanner = new Scanner(new File("data.txt"));

            while (scanner.hasNextLine()) {
                String line = scanner.nextLine();

                for (int i = 0; i < line.length(); i++) {
                    char ch = line.charAt(i);

                    if (Character.isUpperCase(ch)) {
                        upperCount++;
                    } else if (Character.isLowerCase(ch)) {
                        lowerCount++;
                    } else if (ch == ' ') {
                        spaceCount++;
                    }
                }
            }

            scanner.close();

            System.out.println("분석 결과:");
            System.out.println("A~Z - " + upperCount);
            System.out.println("a~z - " + lowerCount);
            System.out.println("spaces - " + spaceCount);

        } catch (FileNotFoundException e) {
            System.out.println("파일을 찾을 수 없습니다.");
        }
    }
}
