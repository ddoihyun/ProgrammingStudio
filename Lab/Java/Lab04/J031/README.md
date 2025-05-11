# J031. 회원가입 아이디/비번 입력받기
사용자의 ID와 암호, 이름을 입력받아서 이 내용을 출력하라.

단, 암호는 반드시 3글자 이상이어야 한다. 암호가 3글자 미만이라면 "Error! password is too short"라는 오류 메시지를 출력한다.

내용을 출력할 때에는 암호의 3번째 글짜부터 마지막 글자까지는 * 문자로 표시한다.


변수는 다음과 같이 사용하라.
```
String userid;      // 입력받은 ID
String password;    // 입력받은 암호
String name;        // 입력받은 이름
```

---

input #1 : 첫째 줄에 ID, 둘째 줄에 암호, 셋째 줄에 사용자 이름을 의미하는 문자열
```
johndoe
12
John Doe
```
output #1 : 오류 메시지
```
Error! password is too short
```
input #2 : 첫째 줄에 ID, 둘째 줄에 암호, 셋째 줄에 사용자 이름을 의미하는 문자열
```
johndoe
1234
John Doe
```
output #2 : 출력
```
User Id: johndoe
Password: 12**
User Name:John Doe
```