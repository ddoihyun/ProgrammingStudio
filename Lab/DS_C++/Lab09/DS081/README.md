# DS081. Making Binary Tree & Traversal
이러한 설명에 따라 프로그램을 작성하고 테스트하시오.
참고 소스:
https://github.com/jerry10004/PS_DS_CPP/blob/main/binarytree/arraytotree.cpp

원하는 개수의 숫자들을 입력받아, 참고 소스 내의 TreeNode 클래스를 활용하여
이 순서대로 노드를 가진 이진 트리를 만드시오.
단, 숫자 0인 경우에는 빈 노드를 의미한다.

이렇게 구성한 이진트리를 inorder traversal한 결과를 출력하시오.

---

input #1 : 첫째 줄은 Node의 개수, 둘째 줄은 순서대로 노드의 값
```
9  
1 2 3 4 5 6 7 8 9
```
output #1 : 만든 binary tree를 inorder traversal한 결과
```
8 4 9 2 5 1 6 3 7
```

input #2 : 첫째 줄은 Node의 개수, 둘째 줄은 순서대로 노드의 값
```
9  
1 2 3 4 0 6 0 8 9
```
output #2 : 만든 binary tree를 inorder traversal한 결과
```
8 4 9 2 1 6 3
```