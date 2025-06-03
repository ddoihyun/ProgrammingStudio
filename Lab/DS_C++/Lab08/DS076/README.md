# DS076. Sorting Library
아래 실행예를 참고하여, 1~5단계까지의 sort를 하나의 라이브러리로 만들고,
라이브러리를 사용하여 원하는 sorting algorithm을 선택하며 하나의 수열에 대해서 정렬을 하는 프로그램을 작성해 보시오.

---

[실행 예] :
```
1.selection 2.insertion 3.bubble 4.quick 5.merge 6.exit > 1
Enter count : 5  
Enter numbers : 64 25 12 22 11  
==== selection sort ====  
[64] [25] [12] [22] [11]  
[11] [25] [12] [22] [64]  
[11] [12] [25] [22] [64]  
[11] [12] [22] [25] [64]  
[11] [12] [22] [25] [64]  

1.selection 2.insertion 3.bubble 4.quick 5.merge 6.exit > 2  
Enter count : 5  
Enter numbers : 64 25 12 22 11  
==== insertion sort ====  
[64] [25] [12] [22] [11]  
[25] [64] [12] [22] [11]  
[12] [25] [64] [22] [11]  
[12] [22] [25] [64] [11]  
[11] [12] [22] [25] [64]  

... 중간 결과 생략 ...

1.selection 2.insertion 3.bubble 4.quick 5.merge 6.exit > 6  
bye!
```