# DS062. 피보나치 수 구하기
DS061 문제에서 작성한 linked list queue library를 이용하여 원하는 피보나치 수 fibonacci(n)을 출력하는 프로그램을 작성하라. 피보나치 수는 다음과 같이 정의된다.

피보나치 계산식은 다음과 같다. (n은 1~20까지의 정수일)

    n = 1 또는 n = 2 이면, fibonacci(n) = 1

    n > 2 이면, fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)

실행 예 설명:

    첫 번째 줄: n을 입력받는다

    두 번째 줄 이후는 단계별로 결과를 출력한다

---

실행 예:
```
7  
1st : 1  
2nd : 1  
3rd : 2  
4th : 3  
5th : 5  
6th : 8  
7th : 13  
=> fibonacci(7) = 13
```