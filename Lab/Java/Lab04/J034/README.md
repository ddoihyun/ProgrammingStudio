# J034. 회원로그인 아이디/비번 검사하기

회원 로그인 시에 아이디와 비번을 입력받은 후 다음 중 하나의 검사결과를 출력하라.

1) Login OK!
2) No user!
3) Incorrect password!
   
다음과 같은 5명의 사용자 이름과 암호를 미리 정하여 코드를 작성하라.
```
String[] usernames = {"kim", "lee", "park", "hong", "choi"};
String[] passwords = {"1111", "1234", "3456", "3535", "7777"};
```

---

input #1 : 첫째 줄에 ID, 둘째 줄에 비밀번호 문자열  
```
lee  
1234 
```
output #1 : 로그인 결과
```
Login OK!
```

input #2 : 첫째 줄에 ID, 둘째 줄에 비밀번호 문자열  
```
park  
7777 
```
output #2 : 로그인 결과
```
Incorrect password!
```

input #3 : 첫째 줄에 ID, 둘째 줄에 비밀번호 문자열  
```
hi  
7777  
```
output #3 : 로그인 결과
```
No user!
```