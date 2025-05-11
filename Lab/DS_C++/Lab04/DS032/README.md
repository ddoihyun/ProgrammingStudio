# DS032. GPA 분석하기
GPA와 학생 이름이 있는 데이터 파일을 읽은 후, 가장 높은 GPA를 가진 학생의 GPA와 이름을 출력하시오.
이 때, 학생의 수는 최대 100명이며, 샘플데이터는 다음과 같다.

단, DS031 문제에서 제작한 MyStack 클래스를 적절히 변경하여 사용하는 프로그램으로 제작하라.
반드시 스택 클래스의 소스파일을 분리하고, makefile을 사용하여 프로그램을 빌드할 것.

STL(Standard template library) 사용 불가하며, 다른 C++ 라이브러리는 사용 가능

*프로그램 수행 방법*
MyStack 객체 생성 후, 파일로부터 한 학생의 GPA와 이름을 가져오면서, 현재까지 가장 높은 GPA와 비교하여 다음과 같은 작업 수행한다.
1) 더 높은 GPA인 경우: stack의 현재 elements를 모두 지우고(clear), 학생의 이름을 push
2) 같은 GPA인 경우: stack에 학생의 이름을 push
3) 더 낮은 GPA인 경우: 무시하고 다음 내용 읽기
파일로부터 더 이상 읽을 내용이 없는 경우, 현재 가장 높은 GPA의 stack에 들어있는 모든 이름을 출력.

---

input #1 : 아래와 같은 내용을 데이터 파일로 입력으로 사용하라. 파일의 이름은 임의로 정한다.
```
3.4 Randy  
3.2 Kathy  
2.5 Mini  
3.4 Tom  
3.8 Sally  
3.8 Mickey  
3.6 Peter
```
output #1 : 가장 높은 GPA와 이 점수를 가진 학생의 이름을 모두 출력한다.
```
Top GPA: 3.8  
Mickey  
Sally
```

input #2 : 아래와 같은 내용을 데이터 파일로 입력으로 사용하라. 파일의 이름은 임의로 정한다.
```
3.4 Randy  
3.2 Kathy  
2.5 Colt  
3.4 Tom  
3.8 Ron  
3.8 Mickey  
3.6 Peter  
3.5 Donald  
3.8 Cindy  
3.7 Dome  
3.9 Andy  
3.8 Fox  
3.9 Minnie  
2.7 Gilda  
3.9 Vinay  
3.4 Danny
```
output #2 : 가장 높은 GPA와 이 점수를 가진 학생의 이름을 모두 출력한다.
```
Top GPA = 3.9  
Vinay  
Minnie  
Andy
```