# DS016. prefix 문자열 구하기
영어로 된 문자열 3개를 입력받아서, 세 단어에 모두 포함된 prefix를 출력하시오.

만약 공통의 prefix가 없으면 물음표를 출력하시오.

단, <iostream>, <string>만 사용하고, STL은 사용하지 말 것.

함수 1개 이상 제작하여 사용할 것.

문자열 개수가 늘어날 경우를 고려하여 제작할 것.

pointer 변수를 사용할 것.

---

input #1 :
```
application apple appendix
```
output #1 :
```
app         // 세 단어에서 첫글자부터 일치하는 단어는 app이다.
```

input #2 :
```
flower flowerpot flowery
```
output #2 :
```
flower      // 세 단어에서 첫글자부터 일치하는 단어는 flower이다.
```

input #3 :
```
dog cat shape
```
output #3 :
```
?           // 세 단어 모두 시작하는 알파벳이 다르므로, ?를 출력한다.
```