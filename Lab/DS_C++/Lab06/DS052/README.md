# DS052. MyCircularQueue를 이용한 명령어 처리기

DS051 문제에서 만든 MyCircularQueue class를 라이브러리로 만들어서, 이 라이브러리를 사용하여 명령어를 처리할 수 있는 프로그램을 작성하라.

사용가능한 명령문은 다음과 같다.
```
en #      : 정수 #를 큐에 넣는 연산이다.  
de        : 큐에서 하나를 빼내는 연산이다.  
front     : 큐에서 가장 앞에 있는 정수를 출력한다.  
rear      : 큐에 가장 뒤에 있는 정수를 출력한다.  
           만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.  
size      : 큐에 들어있는 정수의 개수를 출력한다.  
empty     : 큐가 비어있으면 1, 아니면 0을 출력한다.  
print     : front 값부터 rear까지 값을 출력한다. (dequeue는 실행하지 않음)  
q         : 종료
```

---

[실행 예]: 첫 번째 숫자는 Queue의 크기, 두 번째 라인부터는 명령문
```
5  
en 10  
en 20  
en 30  
front  
=> 10  
rear  
=> 30  
size  
=> 3  
empty  
=> 0  
de  
de  
size  
=> 1  
de  
empty  
=> 1  
en 40  
en 50  
en 60  
print  
40 => 50 => 60  
q  
bye!
```