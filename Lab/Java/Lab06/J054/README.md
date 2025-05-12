# J054. 국영수 점수 분석하기 - 3
J053 문제에 대해 Score 내에 다음과 같은 변수와 메소드를 추가하라.
```
int[] sum_class;             // 과목별 총점  
double[] average_class;      // 과목별 평균  

public printScore(int num, String classname);   // num 과목의 총점, 평균 출력
```

테스트는 다음과 같은 과정으로 진행하라.
1) Score 객체를 하나 만든다. 이때 5명의 점수를 다룰 수 있도록 Score(5)를 사용하라.  
2) 이 객체의 getScore 메소드를 사용하여 5명의 국, 영, 수 점수를 입력받는다.  
3) 이 객체의 printScore 메소드를 적절히 사용하여 학생별 점수, 총점, 평균과  
   과목별 총점, 평균을 출력한다.