# J092. 주차장 입출력 관리
다음과 같이 메뉴에 따라 주차장정보를 관리하는 프로그램을 제작하시오.
클래스명, 멤버변수, 메소드 및 파라미터, 리턴타입은 각자 결정하되, 결과 예시 화면을 참고하시오.

주차 비용은 입차 후 10분 미만은 무료이며, 10분 단위로 500원씩 부과된다. 예를 들어, 25분 주차 시에는 1000원이 부과된다.

단, 주차정보는 HashMap<차량번호, 주차정보>를 사용하여 관리하며, 현재 날짜와 시간을 가져오기 위해서 SimpleDateFormat 클래스를 적절히 활용하라.

주차 관리 기능
1) 입차(enter) – 차량번호(4자리)와 차종을 입력받아 주차 등록함
2) 출차(exit) – 주차된 차량 중 하나를 선택하여 주차비용을 계산하고 출차 처리함
3) 목록(list) – 현재 주차된 모든 차량 정보와 입차시간을 출력함
4) 종료(quit) – 프로그램 종료

---

[실행 예]:
```
1) enter, 2) exit, 3) list 4) quit > 1  
Enter number, type > 3131 avante  
1) enter, 2) exit, 3) list 4) quit > 1  
Enter number, type > 1212 sonata  
1) enter, 2) exit, 3) list 4) quit > 3  
==========================================  
num      type      time  
[1] 3131   avante   20230928 0123  
[2] 1212   sonata   20230928 0128  
1) enter, 2) exit, 3) list 4) quit > 2  
Enter car number to exit > 3131  
3131 avante 7min, Parking fee 0 (current time 20230929 0130)  
1) enter, 2) exit, 3) list 4) quit > 3  
==========================================  
num      type      time  
[1] 1212   sonata   20230928 0128  
1) enter, 2) exit, 3) list 4) quit > 4  
```