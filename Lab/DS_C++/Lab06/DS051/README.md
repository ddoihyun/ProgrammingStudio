# DS051. MyCircularQueue 만들기
Class diagram을 참고하여, 다음 두 개의 멤버메소드를 추가하여 실행예제와 같이 나오도록 프로그램을 작성하라.
```
MyCircularQueue
- maxsize : int
- front : int
- rear : int
- *list : element type

+ initialize() : void
+ isEmpty() const : bool
+ isFull() const : bool
+ enqueue(element type&) : void
+ dequeue() : void
+ Front() const : element type
+ Rear() : element type
+ MyCircularQueue(int = 10)
+ ~MyCircularQueue()
+ print() : void
```
또한, enqueue를 할 때 반복문을 통해서 값을 추가한다.
```
int size() const; // 현재 큐에 들어있는 element의 개수를 알려주는 함수
void printDetail() const; // 큐의 상태를 상세히 출력하는 함수
```
실행결과 예를 참조하라.
```
Size : 1  
Queue : [10]  
index :  
front : 0, rear : 1
```

---

실행 예 : 
```
===== Dequeue x 1 =====
=> Queue is empty !
Size : 0
Queue : 
index : 
front : 0, rear : 0

===== Enqueue x 7 (10 ~ 70) =====
Queue : [10][20][30][40][50][60][70]
index :    1   2   3   4   5   6   7
front : 0, rear : 7

===== Dequeue x 3 =====
Size : 4
Queue : [40][50][60][70]
index :    4   5   6   7
front : 3, rear : 7

===== Enqueue x 6 (10 ~ 60) =====
=> Queue is full !
Size : 9
Queue : [40][50][60][70][10][20][30][40][50]
index :    4   5   6   7   8   9   0   1   2
front : 3, rear : 2
```