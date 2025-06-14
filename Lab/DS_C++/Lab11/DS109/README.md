# DS109. 문자열에서 연속으로 나오는 문자 삭제하기
영어로 된 문자열이 주어졌을 때, 이전 문자와 같은 문자가 연속해서 나오게 되면 중복문자 2개를 모두 제거하시오.

단, 중복문자를 제거한 후 남은 문자열에서 다시 중복문자가 생기는 경우에도 반복적으로 제거해야 한다.

[hint] : stack container를 사용할 것.

참고문제 (leetcode): https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

---

input #1 : 문자열
```
abccbayes
```
output #1 :
```
yes
```
설명: 처음 중복문자인 cc를 제거, 남은 문자열에서 bb 제거, 다시 aa 제거
→ 결과: "yes"

input #2 : 문자열
```
ggbbbeeest
```
output #2 :
```
best
```
설명: 처음 gg 제거, bb 제거, ee 제거
→ 남은 "best"