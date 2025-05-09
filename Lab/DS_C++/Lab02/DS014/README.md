# DS014. 문자의 앞뒤 공백 제거하기
공백과 탭키가 포함된 문자열을 입력했을 때, 전체 문자열 앞이나 전체 문자열 뒤에 있는 공백이나 탭키를 제거하고, 문자열만 출력하라. 문자열 앞의 공백을 제거하는 Itrim(), 문자열 뒤의 공백을 제거하는 Rtrim() 함수를 직접 제작하여 완성하라.

단, STL은 사용하지 말 것.

함수 2개 이상 제작하여 사용할 것.

hint: <string> header file을 포함하고, find_first_not_off() 함수와 find_last_not_of() 함수를 활용하라.

---

input : 앞뒤에 공백과 탭키가 섞여있는 문자열, [tab]은 문자열이 아니라 탭 키를 누른 것임.
```
[tab][tab]  Hello World    [tab]
```
output : 
```
Hello World
```