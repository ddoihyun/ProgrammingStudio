# J044. Random Password 만들기
다음과 같은 내용으로 임의의 암호문자열을 만들어주는 클래스 MakePW를 제작하라.

```
class MakePW {
    public MakePW();                    // 생성자
    public void make(int length);      // length 길이를 갖는 암호문자열 출력하기
}
```

임의의 수를 만들기 위해 Random 클래스를 사용하라.

```
import java.util.Random;
```

테스트는 다음과 같은 과정으로 진행하라.
1. MakePW 객체를 하나 만든다.
2. 이 객체의 make 메소드를 사용하여 원하는 길이의 암호 문자열을 출력한다.