# DS082. Making Binary Tree & Traversal
DS081 문제를 참고하여 아래의 설명에 따라 프로그램을 작성하고 테스트하시오.

원하는 개수의 숫자들과 traversal 방법을 입력받아,
이 순서대로 노드를 가진 이진 트리를 만들고 traversal한 결과를 출력하시오.
단, 숫자 0의 경우에는 빈 노드를 의미한다.

traversal 방법은 다음과 같이 구분한다:

1. preorder traversal
2. postorder traversal

---

input #1 : 첫째 줄은 Node의 개수와 traversal 방식, 둘째 줄은 순서대로 노드의 값
```
9 1  
1 2 3 4 0 6 0 8 9
```
output #1 : 만든 binary tree를 traversal한 결과
```
preorder traversal: 1 2 4 8 9 3 6 
```

input #2 : 첫째 줄은 Node의 개수와 traversal 방식, 둘째 줄은 순서대로 노드의 값
```
9 2  
1 2 3 4 0 6 0 8 9
```
output #2 : 만든 binary tree를 traversal한 결과
```
postorder traversal: 8 9 4 2 6 3 1
```