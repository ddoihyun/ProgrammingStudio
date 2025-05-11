import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J028();
    }

    void J028() {
        int[][] jumsu = new int[5][3];             // 5명의 3과목 점수를 저장하고 있는 2차원 배열
        int[] sum_student = new int[5];            // 학생별 총점
        double[] average_student = new double[5];   // 학생별 평균
        char[] grade = new char[5];                // 학생별 등급
        int[] sum_class = new int[3];           // 과목별 총점
        double[] average_class = new double[3];    // 과목별 평균

        String[] subject = {"Korean", "English", "Math"};    

        Scanner s = new Scanner(System.in);
        for(int i=0; i<5; i++) {
            for(int j=0; j<3; j++) {
                jumsu[i][j] = s.nextInt();
                sum_student[i] += jumsu[i][j];
                sum_class[j] += jumsu[i][j];
            }
        }            
  
        for(int j=0; j<3; j++){
            average_class[j] = (double)sum_class[j]/5.0;
            System.out.printf("%s - Sum %d, Average %.1f\n", subject[j], sum_class[j], average_class[j]);
        }

        for(int i=0; i<5; i++){
            average_student[i] = (double)sum_student[i]/3.0;
            if(average_student[i] >= 90) grade[i] = 'A';
            else if(average_student[i] >= 80) grade[i] = 'B';
            else if(average_student[i] >= 70) grade[i] = 'C';
            else if(average_student[i] >= 60) grade[i] = 'D';
            else grade[i] = 'F';
            System.out.printf("#%d Student - Sum %d, Average %.1f, Grade %c\n", i+1, sum_student[i], average_student[i], grade[i]);
        }  
        
        s.close();
    }
}