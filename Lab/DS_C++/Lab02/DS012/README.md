# DS012. 구조체 비교하기
다음 항목을 포함하는 구조체를 정의하고, 두 개의 구조체가 같은지 다른지 비교 결과를 출력하는 함수를 제작하여 프로그램을 작성하라.

구조체 정보 : 상품 이름 / 가격 / 제조사

구조체의 내용이 같은지 비교할 때 상품이름(대소문자는 구분하지 않음)과 가격이 모두 일치하면 같은 것으로 확인하라. 같은 경우에는 첫 번째 상품이름으로 메시지를 출력하라.

단, <iostream>만 사용하고, STL은 사용하지 말 것.

함수 1개 이상 제작하여 사용하고, 포인터 변수를 사용할 것.

---

input #1 : 
```
Choco-pie 4800 Lotte
Choco-pies 4800 Lotte
```
output #1 : 
```
Choco-pie and Choco-pies is not eqaul.
```

input #2 : 
```
Ritter_Sport_mini 6980 Alfred_Ritter
ritter_sport_mini 6980 Alfred_Ritter_GmbH
```
output #2 : 
```
Ritter_Sport_mini is equal.
```