# DS021. 성적 계산하기
학생의 이름과 국어, 영어, 수학 점수를 입력받은 후, 평균을 구하여 출력하는 프로그램을 만드시오. 단 <iostream>만 사용하고, STL은 사용하지 말 것. Student 클래스를 따로 제작하여 해결할 것

```
class Student{
    private:
        double getAvg() const;
    public:
        string name;
        string sid;
        int *score;
        void print() const;
};
```

---

input : 
```
2180001 80 100 90
Hong gil-dong
```
output :
```
[218001] Hong gil-dong
The Average score is 90.0
```