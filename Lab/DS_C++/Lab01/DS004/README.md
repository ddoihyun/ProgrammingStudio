# DS004. 국, 영, 수 과목 점수를 입력받아 총점과 평균을 계산하고, 등급 판정
국어, 영어, 수학 점수를 입력받아 이 점수의 총점과 평균을 계산하고, 각 과목별로 70점 이상이면 "Pass", 아니면 "Fail"을 표시하여 출력하라.

단, 점수 데이터는 다음과 같이 structure로 정의하여 사용하라.

```
struct st_score{
    int kor, eng, math;     // 국어, 영어, 수학 점수
    int total;              // 총점
    double average;         // 평균
}
```

===

input #1 : 국어, 영어, 수학 점수를 표현하는 정수 3개
```
95 85 88
```
output #1 : 첫째 줄에 총점과 평균, 둘째 줄부터 과목 등급 판정
```
268 89.3
Korean - Pass, 
English - Pass, 
Math - Pass
```

input #2 : 국어, 영어, 수학 점수를 표현하는 정수 3개
```
95 69 74
```
output #2 : 첫째 줄에 총점과 평균, 둘째 줄부터 과목 등급 판정
```
238 79.3
Korean - Pass, 
English - Fail, 
Math - Pass
```