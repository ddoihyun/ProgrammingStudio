import java.util.Random;

public class MakePW {
    Random random;
    char[] charset;

    public MakePW() {
        random = new Random();

        // 사용할 문자: 숫자 + 대문자 + 소문자
        String chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        charset = chars.toCharArray();
    }

    public void make(int length) {
        char[] password = new char[length];

        for (int i = 0; i < length; i++) {
            int index = random.nextInt(charset.length);
            password[i] = charset[index];
        }

        String result = "";
        for (int i = 0; i < length; i++) {
            result += password[i];
        }

        System.out.println("생성된 암호: " + result);
    }
    
    // lenght: 암호 문자열 길이, amount: 생성할 암호 개수
    public String[] make(int length, int amount) {
        String[] list = new String[amount];
        for(int j=0; j<amount; j++){
            char[] password = new char[length];

            for (int i = 0; i < length; i++) {
                int index = random.nextInt(charset.length);
                password[i] = charset[index];
            }

            String result = "";
            for (int i = 0; i < length; i++) {
                result += password[i];
            }
            list[j] = result;
        }
        return list;
    }
}
