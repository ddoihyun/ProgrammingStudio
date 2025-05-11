import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J033();
    }

    void J033() {
        int count;  // 학부의 수
        String longest, shortest; // 가장 긴 학부 이름, 가장 짧은 학부 이름
        Scanner s = new Scanner(System.in);
        count = s.nextInt();
        String[] names = new String[count];
        s.nextLine();
        for(int i = 0; i < count; i++){
            names[i] = s.nextLine();
        }
        int maxIndex = 0;
        int minIndex = 0;
        for(int i=1; i<count; i++){
            if(names[i].length() > names[maxIndex].length())
                maxIndex = i;
            if(names[i].length() < names[minIndex].length())
                minIndex = i;
        }

        longest = names[maxIndex];
        shortest = names[minIndex];

        System.out.println("Longest name: " + longest);
        System.out.println("Shortest name: " + shortest);
        
        s.close();
    }
}