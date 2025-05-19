# J083. 국영수 점수 분석하기 (파일 버전)
학생의 국어, 영어, 수학 점수를 다루는 클래스를 Score로 제작하고
이를 사용하는 프로그램을 작성하시오.

class Score 정의
```
class Score {
    String name;       // 학생 이름  
    int kor, eng, mat; // 학생의 국어, 영어, 수학 점수  
    int sum;           // 학생의 총점  
    double avg;        // 학생별 평균

    // constructors  
    // getters & setters  

    public toString(); // 학생의 점수 출력 (overridden)
};
```

단, Score 객체를 ArrayList로 관리하는 ScoreManager 클래스를 제작하여 다음 작업을 수행하시오.
- 각 과목별 총점과 평균 점수를 출력
- 각 학생별 총점과 평균 점수를 출력
- 가장 높은 평균 점수를 받은 학생의 이름과 점수 출력

---

데이터파일 예시 : 각 줄에 이름과 국어, 영어, 수학 점수가 들어감
```
Kim 95 76 90  
Park 76 90 79  
Lee 87 80 92  
Choi 85 96 87  
Oh 70 75 89  
Wang 73 80 90  
Yoon 85 93 75  
Jeong 82 79 77
```