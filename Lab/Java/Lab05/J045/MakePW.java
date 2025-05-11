import java.util.Random;

class MakePW {
    Random random;

    public MakePW() {
        random = new Random();
    }

    public void makeCode(int length1, int length2) {
        // 알파벳
        char[] letters = new char[length1];
        for (int i = 0; i < length1; i++) {
            letters[i] = (char) ('A' + random.nextInt(26));
        }

        // 숫자
        int[] digits = new int[length2];
        for (int i = 0; i < length2; i++) {
            if (i == 0) {
                digits[i] = random.nextInt(9) + 1; // 첫 자리는 1~9(0은 금지)
            } else {
                digits[i] = random.nextInt(10);    // 0~9
            }
        }

        String code = "";
        for (int i = 0; i < length1; i++) {
            code += letters[i];
        }

        code += "-";

        for (int i = 0; i < length2; i++) {
            code += digits[i];
        }

        System.out.println("랜덤 코드: " + code);
    }
}