# J029. 겹치지 않는 숫자 10개 입력 받기
사용자에게 1부터 100사이의 숫자를 10개 입력받아 이를 순서대로 출력하라. 단, 사용자가 입력하는 동안  이미 입력한 숫자와 같은 숫자를 입력하면 "Duplicated! Retry."라는 문구와 함께 다시 입력받도록 하라. 입력이 완료되면 10개의 수를 모두 출력하라.


변수는 다음과 같이 사용하라.
```
int[] number = new int[10];         // 사용자가 입력한 숫자 10개
int count;                          // 현재까지 입력된 숫자의 개수(0~10)
```

---

input :
```
Enter #1 number > 1
Enter #2 number > 2
Enter #3 number > 3
Enter #4 number > 4
Enter #5 number > 3
Duplicated! Retry.
Enter #5 number > 5
Enter #6 number > 6
Enter #7 number > 7
Enter #8 number > 8
Enter #9 number > 9
Enter #10 number > 10
```
output:
```
Numbers - 1 2 3 4 5 6 7 8 9 10
```