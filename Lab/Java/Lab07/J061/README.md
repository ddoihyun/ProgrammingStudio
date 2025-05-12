# J061. 단어장 프로그램 ver.1
다음과 같이 영어 단어장을 관리하는 프로그램을 제작하라. 단, 필요한 모든 요구사항을 만족해야 한다.

1) Word.java
    - 단어정보(영문단어, 한글뜻, 난이도(1~3))를 담고 있는 Word class
    - Constructor 제작할 것. (예: 모든 멤버데이터를 파라미터로 받아 생성)
    - 각 멤버에 대한 getter, setter를 작성하시오.
    - 멤버의 내용을 문자열로 리턴하는 toString()을 작성하시오.

2) WordCRUD.java
    - 단어들을 ArrayList로 다루면서 아래 기능이 동작하도록 제작하시오.
    - 기능 구현 목록:
      - 단어 추가
      - 단어 뜻 수정
      - 단어 목록 출력
      - 단어 삭제

---

*Sample Code: Main.java*
```
package pstudio.J061;

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Main Pstudio = new Main();
    Pstudio.run();
  }

  public void run() {
    int menu, quit = 0;
    Scanner s = new Scanner(System.in);
    WordCRUD manager = new WordCRUD();
    while (true) {
      System.out.print("Menu> 1 Add 2 Edit 3 List 4 Delete 0 Exit");
      menu = s.nextInt();
      switch (menu) {
        case 1: manager.addWord(); break;
        case 2: manager.editWord(); break;
        case 3: manager.listWord(); break;
        case 4: manager.deleteWord(); break;
        default: quit = 1;
      }
      if (quit == 1) break;
    }
  }
}

```

*Sample Code (partial): WordCRUD.java*
```
package pstudio.j061;

import java.util.ArrayList;
import java.util.Scanner;

public class WordCRUD {
    ArrayList<Word> list;

    public WordCRUD() {
        list = new ArrayList<Word>();
    }

    void addWord() {
        String english, korean;
        int level;
        Scanner s = new Scanner(System.in);
        System.out.print("English > ");
        english = s.next();
        s.nextLine();
        System.out.print("Korean > ");
        korean = s.nextLine();
        System.out.print("Level (1-3) > ");
        level = s.nextInt();
        Word new_word = new Word(english, korean, level);
        list.add(new_word);
    }

    void editWord() {
    }

    void listWord() {
        for (int i = 0; i < list.size(); i++)
            System.out.printf("%d - %s\n", i + 1, list.get(i).toString());
    }

    void deleteWord() {
    }
}
```