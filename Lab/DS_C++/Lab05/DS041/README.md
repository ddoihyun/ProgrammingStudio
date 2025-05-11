# DS041. MyLinkedStack 만들기
다음과 같은 Node와 LinkedStack class를 이용하여 linked stack을 만들고자 한다.
이 두 클래스를 생성하고, 사용하여 숫자를 관리하는 스택을 만들어 테스트하라.

반드시 스택 클래스의 소스파일을 분리하고, makefile을 사용하여 프로그램을 빌드할 것.

◾ 클래스 이름: Node
- 멤버변수
```
- data : int  
- next : Node*
```
- 멤버메소드
```
+ Node(int data)     // constructor
```

◾ 클래스 이름: MyLinkedStack
- 멤버변수
```
- stacktop : Node*
```
- 멤버메소드
```
+ initialize() : void  
+ isEmpty() const : bool  
+ push(const int&) : void  
+ pop() : void  
+ top() const : int  
+ getNodeCnt() const : int     // node의 개수를 가져옴  
+ MyLinkedStack()  
+ ~MyLinkedStack()  
+ printAll() : void            // stack을 pop 순서로 출력 (pop은 하지 않음)
```
사용 가능한 명령어
```
push #      stack에 새로운 Node를 생성하여 element 추가함  
pop         내용은 출력하지는 않음  
top         현재 stacktop에 있는 내용을 출력 (pop하지는 않음)  
print       모든 element 출력  
clear       스택 초기화  
q           종료
```

---

input 예 :
```
push 10  
push 20  
clear  
push 30  
push 40  
push 50  
pop  
peek  
push 60  
push 70  
print  
clear  
print
q
```

output 예 :
```
40  
70 -> 60 -> 40 -> 30 (4 nodes)  
Stack is empty  
Bye!
```