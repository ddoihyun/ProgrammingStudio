import java.util.Random;
import java.util.Scanner;

public class Lotto {
        int[] numbers = new int[6]; 
    
        public Lotto() {
            generateNumbers();
        }
    
        public void printNumbers() {
            System.out.print("Lotto Numbers: ");
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
                int num = rand.nextInt(45) + 1; // 1~45
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
    
        public void remake(){
            Scanner s = new Scanner(System.in);
            int count = 0;
            System.out.println("Input number between 1 and 45. (6 numbers, no duplicate)");
            while (count < 6) {
                System.out.print((count + 1) + "번째 번호: ");
                int input = s.nextInt();
    
                if (input < 1 || input > 45) {
                    System.out.println("Please input number between 1 and 45.");
                    continue;
                }
    
                boolean isDuplicate = false;
                for (int i = 0; i < count; i++) {
                    if (numbers[i] == input) {
                        isDuplicate = true;
                        break;
                    }
                }
    
                if (isDuplicate) {
                    System.out.println("Duplicated. Retry.");
                } else {
                    numbers[count] = input;
                    count++;
                }
            }
            s.close();
        }
    }