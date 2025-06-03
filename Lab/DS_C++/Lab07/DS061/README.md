# DS061. MyLLQueue 만들기
주어진 링크의 소스를 이용하여 아래 조건에 맞게 수정하라:
https://github.com/jerry10004/PS_DS_CPP/blob/main/queue/queue_linkedlist.cpp

조건:
- LinkedList를 사용한 Queue를 클래스로 생성하라.
- 메뉴 4. showrear를 구현해 필요한 Queue의 멤버 함수 showRear()를 추가 제작하라.
- Queue를 라이브러리로 만들어서, 이를 활용하는 프로그램을 제작하라.
- 실행 예와 같은 결과가 나오도록 필요한 코드를 수정하라.

---

[실행 예]:
```
1.enqueue 2.dequeue 3.showfront 4.showrear 5.displayQueue 6.exit > 1  
Enter a Value: 10

1.enqueue 2.dequeue 3.showfront 4.showrear 5.displayQueue 6.exit > 1  
Enter a Value: 20

1.enqueue 2.dequeue 3.showfront 4.showrear 5.displayQueue 6.exit > 1  
Enter a Value: 30

1.enqueue 2.dequeue 3.showfront 4.showrear 5.displayQueue 6.exit > 5  
10 -> 20 -> 30

1.enqueue 2.dequeue 3.showfront 4.showrear 5.displayQueue 6.exit > 3  
element at front: 10

1.enqueue 2.dequeue 3.showfront 4.showrear 5.displayQueue 6.exit > 4  
element at rear: 30

1.enqueue 2.dequeue 3.showfront 4.showrear 5.displayQueue 6.exit > 2

1.enqueue 2.dequeue 3.showfront 4.showrear 5.displayQueue 6.exit > 5  
20 -> 30

1.enqueue 2.dequeue 3.showfront 4.showrear 5.displayQueue 6.exit > 6  
bye!
```