import java.util.Random;
import java.util.Scanner;

public class Lotto {
    int[] numbers = new int[6]; // 당첨 번호

    public Lotto() {
        generateNumbers();
    }

    public int[] GetNumbers(){
        return numbers;
    }

    public void printNumbers() {
        for (int num : numbers) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public void printNumbers(int[] numbers) {
        for (int num : numbers) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public void remakeAuto() {
        generateNumbers();
    }

    private void generateNumbers() {
        Random rand = new Random();
        int count = 0;

        while (count < 6) {
            int num = rand.nextInt(45) + 1; // 1~45 범위
            boolean isDuplicate = false;

            for (int i = 0; i < count; i++) {
                if (numbers[i] == num) {
                    isDuplicate = true;
                    break;
                }
            }

            if (!isDuplicate) {
                numbers[count] = num;
                count++;
            }
        }
    }

    public int[] remake(){
        Scanner s = new Scanner(System.in);
        int[] inputNumbers = new int[6];
        int count = 0;
        System.out.println("1~45 사이의 숫자를 6개 입력하세요 (중복 불가):");

        while (count < 6) {
            System.out.print((count + 1) + "번째 번호: ");
            int input = s.nextInt();

            if (input < 1 || input > 45) {
                System.out.println("1~45 사이의 숫자만 입력 가능합니다.");
                continue;
            }

            boolean isDuplicate = false;
            for (int i = 0; i < count; i++) {
                if (inputNumbers[i] == input) {
                    isDuplicate = true;
                    break;
                }
            }

            if (isDuplicate) {
                System.out.println("중복된 번호입니다. 다시 입력하세요.");
            } else {
                inputNumbers[count] = input;
                count++;
            }
        }

        s.close();
        return inputNumbers;
    }

    public int checkLotto(int[] check){
        int count = 0;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                if (numbers[i] == check[j]) {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
}
