# J028. 5명의 점수 분석하기
학생 5명의 국어, 영어, 수학 점수를 각각 입력받아 저장한 후에, 다음 항목들을 계산하여 출력하라.

1) 각 과목별 총점과 평균 점수
2) 각 학생별 총점과 평균 점수, 평균에 따른 등급

등급은 다음과 같은 기준으로 결정하라.

평균 90 이상 : A

평균 80 이상 ~ 90 미만 : B

평균 70 이상 ~ 80 미만 : C

평균 50 이상 ~ 60 미만 : D

평균 60 미만 : F


변수는 다음과 같이 사용하라.
```
int[][] jumsu = new int[5][3];             // 5명의 3과목 점수를 저장하고 있는 2차원 배열
int[] sum_student = new int[5];            // 학생별 총점
double[] average_student = new double[5];   // 학생별 평균
char[] grade = new char[5];                // 학생별 등급
int[] sum_class = new int[3];           // 과목별 총점
double[] average_class = new double[3];    // 과목별 평균
```

---

input : 5줄에 각 학생별 국어, 영어, 수학 점수를 의미하는 정수 3개씩
```
85 95 75
90 90 90
65 85 75
60 70 80
60 50 60
```
output : 과목별 총점과 평균 점수, 학생별 총점과 평균 점수, 등급
```
Korean - Sum 360, Average 72.0
English - Sum 390, Average 78.0
Math - Sum 380, Average 76.0
#1 Student - Sum 255, Average 85.0, Grade B
#2 Student - Sum 270, Average 90.0, Grade A
#3 Student - Sum 225, Average 75.0, Grade C
#4 Student - Sum 210, Average 70.0, Grade C
#5 Student - Sum 170, Average 56.7, Grade F
```