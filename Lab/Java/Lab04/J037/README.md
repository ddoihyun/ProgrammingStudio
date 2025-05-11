# J037. 애너그램 판별하기
문자열 s1, s2 2개를 입력받아 이 두 문자열이 anagram인지 판별하라.  
anagram이란 두개의 문자열 속의 알파벳이 동일한 개수만큼 포함된 것을 말한다. 

이때, 알파벳은 소문자만 입력된다고 가정하며, 알파벳 외의 문자들은 무시한다.

---

input #1 : 두 문자열이 한 줄씩 입력
```
creative  
reactive
```
output #1 : anagram 여부
```
Yes
```

input #2 : 두 문자열이 한 줄씩 입력
```
creation  
evolution
```
output #2 : anagram 여부
```
No
```

input #3 : 두 문자열이 한 줄씩 입력
```
eleven + two  
twelve + one
```
output #3 : anagram 여부
```
Yes
```

input #4 : 두 문자열이 한 줄씩 입력
```
mcdonald's restaurants  
uncle sam's standard rot
```
output #4 : anagram 여부
```
Yes
```