# J046. 문자열을 다루는 유틸리티 클래스 제작하기 - 1
다음과 같은 기능을 가진 클래스 MyString을 제작하고 테스트하라.

```
class MyString {
    public static int whichFirst(String str1, String str2);
    // 2개의 문자열 중에 어떤 것이 사전적으로 먼저 나오는지 판단한다. (결과 1 or 2)
    // 단, 각각의 문자를 비교할 때에 대소문자는 무시하라.
}
```
테스트는 다음과 같은 과정으로 진행하라.

2개의 영어단어를 입력받은 후에, MyString.whichFirst()를 이용하여 이 단어 중에서
영어사전 순서에 따를 때 먼저 나오는 단어를 알아내어 그 결과를 출력하라.

---

input #1: 첫째 줄에 첫 번째 문자열, 둘째 줄에 두 번째 문자열
```
Boy  
atom  
```
output #1: 문자열 비교 결과
```
2 atom
```

input #2: 첫째 줄에 첫 번째 문자열, 둘째 줄에 두 번째 문자열
```
Hello  
world  
```
output #2: 문자열 비교 결과
```
1 Hello
```