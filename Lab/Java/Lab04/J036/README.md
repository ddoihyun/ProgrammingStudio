# J036. 회문검사하기
문장을 1개 입력받아 이 문장이 회문(Palindrome)인지 판별하라.

회문이란 거꾸로 읽어도 동일한 알파벳 순서가 되는 문장이다.

단, 알파벳 이외의 문자는 제외하고, 모든 알파벳은 소문자라고 가정한다.


[hint] : 입력받은 문장에서 알파벳만 골라서 새로운 문자열을 만든 후,  
이 문자열에 대해서 양쪽 끝에서부터 가운데문자까지 각각의 모든 문자가 같은지 확인한다.

---

input #1 : 문장 문자열
```
Hello World
```
output #1 : 회문 여부
```
No
```

input #2 : 문장 문자열
```
i did, did I?
```
output #2 : 회문 여부
```
Yes
```

input #3 : 문장 문자열
```
no lemon, no melon
```
output #3 : 회문 여부
```
Yes
```

input #4 : 문장 문자열
```
eva, can i see bees in a cave?
```
output #4 : 회문 여부
```
Yes
```