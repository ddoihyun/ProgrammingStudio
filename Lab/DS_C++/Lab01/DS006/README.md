# DS006. 전공 3과목의 GPA 계산하기
전공 3과목의 과목명, 학점 수, 취득점수를 입력받은 후, 각 과목의 등급과 평점을 계산하여 표시하고, 총 학점과 GPA를 계산하여 출력하라. GPA는 각 과목별 (학점 수 * 취득학점)의 총합을 총 학점 수로 나눈 값이다.

단, 데이터는 다음 변수들을 포함하는 structure로 정의하여 사용하라.
- 과목명 (문자열)
- 학점 수 (1~4)
- 취득점수 (0~100)
- 등급 (A+ ~ F)
  
---

input : 3개의 과목명, 학점 수, 취득점수
```
Data_Structure 3 86
Java_Programming 3 91
Programming_Studio 2 95
```
output : 과목별 등급, 평점 및 총학점과 GPA
```
Data Structure(3) B+ 3.5
Java Programming(3) A0 4.0
Programming Studio(2) A+ 4.5
Total Credits 8. GPA 3.93
```