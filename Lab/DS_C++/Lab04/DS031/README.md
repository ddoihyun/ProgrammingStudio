# DS031. MyStack 만들기
다음과 같은 MyStack 클래스를 만들고, 이 클래스를 사용하여 숫자를 집어넣는 스택을 만들어 테스트하라.

단, 스택의 용량을 입력값에 포함시킬 것.

단, 클래스는 별도 파일로 정의해서 작성할 것. 반드시 스택 클래스의 소스파일을 분리하고, makefile을 사용하여 클래스 파일을 컴파일할 것.

Class 이름: MyStack
멤버변수와 함수:
```
maxsize : int  
top : int  
*list : element type
```
멤버메소드의 리턴값:
```
initialize() : void  
isEmpty() const : bool  
isFull() const : bool  
push(const elem&) : void  
pop() : elem*  
myStack(int = 10)  
~myStack()  
print() : void        // stack의 내용을 모두 출력하는 함수
```

사용 가능한 명령문은 다음과 같다.
    - push ##     stack에 새로운 element 추가
    - pop         stack에서 1개의 element를 제거, 내용을 출력하지는 않음
    - print       stack에 모든 element를 출력하고 프로그램을 종료
  
---

input : 첫 번째 라인에는 스택의 크기, 두 번째 라인부터는 명령문
```
5
push 10
push 20
push 30
pop
pop
push 40
push 50
print
```
output:
```
50
40
10
```