# DS106. Making Min Heap
DS083 문제를 참고하여 Min Heap 프로그램을 제작하시오.


즉, 최소값이 root 노드에 배정되는 heap을 말한다. 아래 ADT를 참고하여 클래스를 제작하고, 이를 이용하여 실행 예와 같이 실행되는지 테스트하시오.


클래스 이름 MinHeap

멤버변수
```
int arr[30];
int length;   // the count of nodes
```

멤버메소드
```
MinHeap()
~MinHeap()
insertKey(int value) : void
deleteKey() : int
peek() : int        // 최소값 리턴
size() : int        // node의 수 리턴
isEmpty() : bool    // node가 없는지 여부
minHeapifyUp(int index) : void    // index의 부모 방향으로 minheap 재구성
minHeapifyDown(int root = 0) : void  // root의 자식 방향으로 minheap 재구성
printHeap() : void  // 모든 노드값을 출력(level order traversal)
```

---

[실행 예]:
```
1. Array to minHeap 2.insert 3.delete 4.print 0.quit > 1
7
12 6 9 5 8 20 4
minHeap => 4 6 5 8 20 9 12

1. Array to minHeap 2.insert 3.delete 4.print 0.quit > 2
3
minHeap => 3 4 5 6 8 20 9 12

1. Array to minHeap 2.insert 3.delete 4.print 0.quit > 3
min value : 3
minHeap => 4 6 5 12 8 20 9

1. Array to minHeap 2.insert 3.delete 4.print 0.quit > 3
min value : 4
minHeap => 5 6 9 12 8 20

1. Array to minHeap 2.insert 3.delete 4.print 0.quit > 4
5 6 9 12 8 20

1. Array to minHeap 2.insert 3.delete 4.print 0.quit > 0
bye!
```