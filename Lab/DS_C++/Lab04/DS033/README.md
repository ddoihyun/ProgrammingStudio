# DS033. 쿠폰 관리기
쿠폰을 관리하는 스택을 생성하고, 스택에 원하는 순서대로 쿠폰을 넣고 꺼내는 기능을 테스트하라.
아래의 실행예를 참고하시오. 반드시 스택 클래스의 소스파일을 분리하고, makefile을 사용하여 프로그램을 빌드할 것.

*Element type* : 쿠폰 정보를 구조체로 정의한다. (예: 2등 치킨1마리, 1등 AirPods pro2)
    - 등수(int)
    - 상품명(string)

*Class 이름* : CouponStack
    멤버변수와 타입
    - maxsize : int  
    - top : int  
    - *list : element type
    멤버메소드의 인터페이스
    - initialize() : void  
    - isEmpty() const : bool  
    - isFull() const : bool  
    - push(const elem&) : void  
    - pop() const : elem*  
    - CouponStack(int = 10)  
    - ~CouponStack()  
    - print() : void     // stack 전체 출력  
    - rprint() : void    // stack pop하면서 전체출력

사용가능한 명령문은 다음과 같다
    + <쿠폰정보> : stack에 <쿠폰정보>에 해당하는 쿠폰 구조체를 만들어 push 한다.
    - : stack에서 마지막으로 넣은 쿠폰을 꺼내어, 쿠폰정보를 출력한다.
    - q : 프로그램을 종료한다.

---

실행 예: 첫줄은 stack의 크기를 지정하는 숫자이며, 두 번째 줄부터 명령문이 입력됨
```
10  
+ 5 Americano tall  
+ 2 AirPods Pro2  
+ 4 치킨 1마리  
+ 5 Americano tall  
+ 3 Tumbler 473ml  
+ 1 MacBook air  
+ 4 치킨 1마리  
-  
4등 - 치킨 1마리  
-  
1등 - MacBook air  
+ 5 Americano tall  
q
```