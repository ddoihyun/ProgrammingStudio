# J048. 문자열을 다루는 유틸리티 클래스 제작하기 - 3
J046 문제에 대해 다음과 같은 메소드를 추가하고, 테스트하라.

```
public static String findLongestWord(String str);
// 파라미터로 받은 문자열에서 가장 긴 단어를 찾아서 리턴한다.
// 단, 동일한 길이의 단어인 경우 먼저 나온 단어를 리턴함
```
테스트는 다음과 같은 과정으로 진행하라.

한 문장을 입력받은 후에, MyString.findLongestWord()를 사용하여 이 문장에서
가장 긴 단어와 그 길이를 출력하라.

---

input #1 : 문장 문자열
```
I am a beautiful girl
```
output #1 : 가장 긴 단어와 길이
```
beautiful 9
```

input #2 : 문장 문자열
```
Why not change the world
```
output #2 : 가장 긴 단어와 길이
```
change 6
```