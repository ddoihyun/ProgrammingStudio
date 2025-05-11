import java.util.Random;

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
    }