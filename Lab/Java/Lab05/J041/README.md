# J041. 로또 번호 만들기
로또 번호는 1부터 45사이의 숫자 중 임의로 6개를 선택할 것이다. 다음과 같은 기능을 가진 Lotto 클래스를 만들고 테스트하라. 단, 로또 번호 6개는 중복된 숫자가 들어갈 수 없다.

```
Class Lotto{
    int[] numbers;             // 로또 번호 6개

    public Lotto();            // 생성자 (자동으로 6개의 로또 번호를 구하여)
    public void printNumbers();// 로또 번호 출력
    public void remakeAuto();  // 자동으로 로또 번호 새로 만들기
}
```
임의의 수를 구하기 위해 Random 클래스를 사용하라.
```
import java.util.Random;
```

테스트는 다음과 같은 작업으로 진행하라.

객체 생성 후 번호 출력하기.

remake() 후 번호 출력하기.

자동으로 번호를 새로 만들어 출력한다.