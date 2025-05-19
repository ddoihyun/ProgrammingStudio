import java.io.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J082();
    }

    void J082() {
        try {
            File file = new File("data.txt");
            Scanner scanner = new Scanner(file);

            int totalCount = 0;
            int overweightCount = 0;

            while (scanner.hasNextInt()) {
                int heightCm = scanner.nextInt();
                int weightKg = scanner.nextInt();

                double heightM = heightCm / 100.0;
                double bmi = weightKg / (heightM * heightM);

                if (bmi >= 25.0) {
                    overweightCount++;
                }

                totalCount++;
            }

            System.out.println("All " + totalCount + " persons.");
            int percent = (int) Math.round((overweightCount * 100.0) / totalCount);
            System.out.println("Total overweight persons: " + overweightCount + " (" + percent + "%)");

            scanner.close();
        } catch (FileNotFoundException e) {
            System.out.println("파일을 찾을 수 없습니다.");
        }
    }
}
