import java.util.Scanner;

class Score {
    int count;              // 학생 인원 수
    int[][] jumsu;          // 점수를 저장하고 있는 2차원 배열
    int[] sum_student;      // 학생들의 총점
    double[] avg_student;   // 학생들의 평균
    // String[] subject = {"Korean", "English", "Math"};

    public Score(int count){        // 생성자 (파라미터로 학생 인원 수 지정, 초기화 진행)
        this.count = count;
        jumsu = new int[count][3];
        sum_student = new int[count];
        avg_student = new double[count];
    }

    public void getScore(){              // 점수 입력 및 총점과 평균 계산
        Scanner s = new Scanner(System.in);
        for(int i = 0; i < count; i++){
            sum_student[i] = 0;
            System.out.printf("Student #%d's score(kor, eng, math) > ", i+1);
            for(int j = 0; j < 3; j++){
                jumsu[i][j] = s.nextInt();
                sum_student[i] += jumsu[i][j];
            }
            avg_student[i] = (double)sum_student[i] / 3.0;
        }
    }
    public void printScore(){            // 학생들의 점수 출력
        for(int i = 0; i < count; i++){
            System.out.printf("Student #%d's score(kor, eng, math), sum, avg > ", i+1);
            for(int j = 0; j < 3; j++) System.out.print(jumsu[i][j] + ", ");
            System.out.printf("%d, %.1f\n", sum_student[i], avg_student[i]);
        }
    }

    public void printScore(int n){       // 학생의 특정 점수 출력
        System.out.printf("Student #%d's score(kor, eng, math), sum, avg > ", n);
        for(int j = 0; j < 3; j++) 
            System.out.print(jumsu[n-1][j] + ", ");
        System.out.printf("%d, %.1f\n", sum_student[n-1], avg_student[n-1]);
    }

    public void printScore(int n, String name){       // 특정 과목 점수 출력
        System.out.printf("%s sum, avg> ", name);
        int total = 0;
        double avg;
        for(int i=0; i<count; i++)
            total += jumsu[i][n];
        avg = (double)total / count;
        System.out.printf("%d, %.1f\n", total, avg);
    }
}