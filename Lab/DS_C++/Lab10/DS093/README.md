# DS093. 단어 정렬하기
알파벳 소문자로 이루어진 N개의 단어를 입력받은 후에 이를 정렬한 결과를 출력하는 프로그램을 제작하시오.
정렬 방법은 다음과 같다.

길이가 짧은 단어가 먼저 출력된다.

길이가 같은 경우에는 사전(알파벳) 순서대로 앞에 나오는 단어가 먼저 출력된다.

중복된 단어가 있는 경우에는 한 번만 출력한다.

[hint] : vector와 find() 함수를 사용할 것.
참고문제: 백준 1181 https://www.acmicpc.net/problem/1181

input: 첫째줄에는 단어의 개수, 둘째째 줄부터 한줄씩 단어 입력
```
17
when
in
doubt
choose
change
no
sweat
no
sweet
where
there
is
a
will
there
is
way
```
output:
```
a
in
is
no
way
when
will
doubt
sweat
sweet
there
where
change
choose
```