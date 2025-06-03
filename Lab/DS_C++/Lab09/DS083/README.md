# DS083. Making Max Heap
Max Heap을 만드는 프로그램을 제작하고, 실행 예를 참고하여 테스트하시오.
단, 노드의 최대 개수는 20개이며, array를 이용하여 다음 함수를 구현하여야 한다.

- *insert(int value)* : value 값을 가진 새로운 노드를 heap에 추가한다.
- *delete()* : heap의 최댓값을 제거 후, maxHeapify() 한다.
- *maxHeapify(int rootindex)* : 새로운 root 노드의 값에 따라 새롭게 heapify 한다. (재귀 함수로 구현)
- *printHeap()* : heap의 모든 값을 level order traversal로 출력한다.

Source Template : https://github.com/jerry10004/PS_DS_CPP/blob/main/binarytree/heap/tree.cpp

---

[실행 예]: 
```
1. insert 2.delete 3.print 4.quit > 1  
new value? 3  
==> Heap : 3  

1. insert 2.delete 3.print 4.quit > 1  
new value? 2  
==> Heap : 3 2  

1. insert 2.delete 3.print 4.quit > 1  
new value? 1  
==> Heap : 3 2 1  

1. insert 2.delete 3.print 4.quit > 1  
new value? 15  
==> Heap : 15 3 1 2  

1. insert 2.delete 3.print 4.quit > 1  
new value? 5  
==> Heap : 15 5 1 2 3  

1. insert 2.delete 3.print 4.quit > 1  
new value? 4  
==> Heap : 15 5 4 2 3 1  

1. insert 2.delete 3.print 4.quit > 1  
new value? 45  
==> Heap : 45 5 15 2 3 1 4  

1. insert 2.delete 3.print 4.quit > 2  
=> Delete 45  
==> Heap : 15 5 4 2 3 1  

1. insert 2.delete 3.print 4.quit > 2  
=> Delete 15  
==> Heap : 5 3 4 2 1  

1. insert 2.delete 3.print 4.quit > 3  
==> Heap : 5 3 4 2 1  

1. insert 2.delete 3.print 4.quit > 4  
Bye!
```