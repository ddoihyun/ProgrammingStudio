# DS013. 카페 메뉴 관리하기
카페의 이름과 메뉴 개수를 입력 받은 후, 세부 메뉴를 등록하여 출력하는 프로그램을 만드시오.

제작할 함수는 다음을 참고하라.

```
void addCafe(Cafe &r1);
void addMenu(Menu &m1);
void displayMenu(Cafe &r1);
```

Cafe 구조체 : 식당 이름(string, 공백 포함), 메뉴 개수(int), 메뉴 리스트(포인터 변수)

Menu 구조체 : 메뉴명(string, 공백 포함하지 않음), 메뉴 가격(int)

단, <iostream>만 사용하고, STL은 사용하지 말 것.

구조체 2개 이상, 함수 2개 이상 제작하여 사용하고, new, delete 사용할 것.

함수의 파라미터로 Reference variable을 사용할 것.

---

input : 
```
HD Cafe
4
Espresso 3000
Americano 3500
CafeLatte 4000
Affogato 5000
```
output : 
```
=====HD Cafe=====
Espresso 3000
Americano 3500
CafeLatte 4000
Affogato 5000
=================
```