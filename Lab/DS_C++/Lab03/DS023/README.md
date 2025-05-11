# DS023 쇼핑몰 상품 정보 관리
쇼핑몰에서 상품을 관리하기 위해 클래스를 정의하고, 상품 추가 및 목록을 출력하시오.

단, <iostream>만 사용하고 STL은 사용하지 말 것.

별도의 클래스를 제작하여 해결할 것 (멤버변수 및 생성자, 메소드 포함)

함수 1개 이상 제작

포인터 변수 사용

Product class (상품 1개의 정보를 다루는 클래스)
멤버 변수 : 상품명, 원래 가격, 할인율, 제조사, 크기
멤버 메소드 : 상품입력(상품명(공백포함)), 가격, 할인율, 용량, 제조사(공백미포함), 상품출력, 할인율에 따른 판매가격 계산기

---

실행 예:
```
1. Add 2. List 3. Quit > 1
KIT KAT
2500 10 85g KitKat
1. Add 2. List 3. Quit > 1
Sunkist Candy
3980 5 317g HAITAI
1. Add 2. List 3. Quit > 1
Chocolate mix bar
2700 0 34g MARS
1. Add . List 3. Quit > 2
2250 (-10%)         KITKAT  85g KitKat
3781 (-5%) Sunkist Candy    317g HAITAI
2700 (0%) Chocolate mix bar 34g MARS
```