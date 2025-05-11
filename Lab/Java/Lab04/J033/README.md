# J033. 학부 영문 이름 중 가장 긴 것과 가장 짧은 것을 찾기
어떤 학교의 학부 영문 이름 중 가장 긴 것과 가장 짧은 것을 찾아내어 출력하라.

변수는 다음과 같이 사용하라.
```
int count;  // 학부의 수
String name; // 입력받은 학부 이름
String longest, shortest; // 가장 긴 학부 이름, 가장 짧은 학부 이름
```

---

input : 첫째 줄에 학부 개수, 둘째 줄부터 학부 이름 영문명
```
13
Global Leadership School
International Studies, Languages and Literature
Management and Economics
Law
Counseling Psychology and Social Welfare
Communication Arts
Spatial Environment System Engineering
Mechanical and Control Engineering
Contents Convergence Design
Life Science
Computer Science and Electrical Engineering
Global Entrepreneurship and ICT
Creative Convergence Education
```

output : 첫째 줄에 가장 긴 학부 이름, 둘째 줄에 가장 짧은 학부 이름
```
Longest: International Studies, Languages and Literature
Shortest: Law
```