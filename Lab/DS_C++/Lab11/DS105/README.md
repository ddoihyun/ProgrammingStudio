# DS105. Sorting with linked list (ver.2)
DS104번 문제의 linked list를 사용한 sorting 프로그램에서 selection sort 이외의 다른 sorting algorithm을 임의로 선택하고 프로그램을 수정한 후, 이를 이용하여 학생 이름과 성적이 주어졌을 때 성적을 내림차순으로 정렬하시오.

[입력 조건]:
첫째 줄에 수열에 속해 있는 수의 개수 N이 주어진다. (1 ≤ N ≤ 500)
둘째 줄부터 N+1번째 줄까지 N개의 수가 입력된다. 수의 범위는 1 이상 100,000 이하의 자연수이다.

[출력 조건]:
입력으로 주어진 수열이 내림차순으로 정렬된 결과를 공백으로 구분하여 출력한다. 동일한 수의 순서는 자유롭게 출력한다.

input: 첫 줄은 명수이고, 두번째 줄부터 성적과 학생 이름이 명수만큼 입력된다.
```
4
95 Randy
77 Kathy
80 Colt
85 Tom
```
output:
```
1> 95 Randy
2> 85 Tom
3> 80 Colt
4> 77 Kathy
```