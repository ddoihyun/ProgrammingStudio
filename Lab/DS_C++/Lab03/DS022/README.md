# DS022. 졸업 영어성적 판단하기
졸업 영어성적을 제출하기 위해 학생 이름, L/C(Listening Comprehension), R/C(Reading Comprehension) 점수를 입력받아 총점과 각 영역별로 350 이상이면 Pass, 아니면 Fail로 표시하라.

각 영어 점수는 0~495 상의 점수를 입력받아야 하며, 그 외 점수를 입력하는 경우에는 범위 안에 있는 점수를 입력받을 때까지 다시 입력받도록 한다.

단, <iostream>만 사용하고, STL은 사용하지 말 것.

별도의 클래스를 제작하여 해결할 것 (멤버변수 및 생성자, 메소드 포함)

함수 1개 이상 제작

선택항목: point variable, memory allocation, reference variable ...


클래스 구성요소:

멤버변수 : 학생이름, LC점수, RC점수

멤버메소드 : 기본생성자 / 입력받는 생성자 / 멤버변수 parameter가 있는 생성자 / 점수 0~495 점수 유효성 체크 함수 / 출력메소드 / pass,fail 메소드 등 ...

---

input :
```
Hong gil-dong
LC > 350
RC > -90
RC > 500
RC > 200
```
output :
```
[Hong gil-dong]
LC - 350 Pass
RC - 200 Fail
Total - 550
```