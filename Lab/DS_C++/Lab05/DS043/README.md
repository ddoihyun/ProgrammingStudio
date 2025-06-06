# DS043. 사용자가 입력한 문자열 알아내기
사용자가 키보드를 이용하여 문자열을 입력하게 되는데,
사용할 수 있는 키는 알파벳, 숫자, < (왼쪽으로 커서를 옮기는 키), > (오른쪽으로 커서를 옮기는 키)만 사용할 수 있다.

이 때, 사용자가 입력한 문자열을 stack을 이용하여 출력하라.
DS041 문제에서 만든 MyLinkedStack을 수정하여 데이터 타입을 int에서 char로 변경하여 사용하라.
키보드로 문장을 입력하면, 문자열의 결과를 출력하는 방식으로 반복 진행된다.
q를 입력하면 종료된다.

반드시 스택 클래스의 소스파일을 분리하고, makefile을 사용하여 프로그램을 빌드할 것.

[hint]:
1. < 와 >가 아닌 문자는 하나씩 읽어서 stack에 넣고, 사용자가 입력한 문자열대로 출력해 본다.
2. 커서의 위치를 기준으로 left와 right로 두 개의 스택을 생성하여 사용하고,
새로운 문자는 left stack에 넣고, 화살표를 움직일 때는 left stack과 right stack에 push와 pop을 적절히 활용하면서 문자열을 관리한다.

---

[실행 예] :
```
ThisISMyStack  
=> ThisISMyStack  
<ABC>Def<<EF  
=> ABCDEfef  
PSDSJA<AV  
=> PSDSJAVA  
q
```