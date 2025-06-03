# J071. 일정 관리 프로그램 ver.2
다음과 같이 일정을 관리하는 프로그램을 제작하라. 단, 필요한 모든 요구사항을 만족해야 한다.
아래 실행화면을 참고할 것.

1) TodoItem.java
   - 일정정보(제목, 내용, 등록일)를 담고 있는 TodoItem class
   - 각 멤버에 대한 getter, setter를 작성하시오.
   - toString()을 override 하여 작성하시오.

2) iCRUD.java
   - CRUD 기능을 정의한 interface 파일

3) TodoCRUD.java
   - iCRUD를 구현하도록 작성하시오.
   - Todo 객체를 ArrayList로 다루면서 아래 기능이 동작하도록 제작하시오.
   - 일정 추가, 일정 정보 수정, 일정 목록 출력 (정렬방법 – 제목, 등록일), 일정 삭제

4) Main.java
    - TodoCRUD 객체를 하나 만들고, 이 객체를 통해 필요한 기능이 동작하도록 제작하시오.

---

Sample Code: Main.java
```
package pstudio.j071;

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Main j071 = new Main();
    j071.run();
  }

  public void displayHelp() {
  }

  public void run() {
    Scanner sc = new Scanner(System.in);
    TodoCRUD manager = new TodoCRUD();
    boolean quit = false;
    do {
      System.out.print("> ");
      String line = sc.nextLine();
      String choice = line.split(" ")[0];
      switch (choice) {
        case "add":
          manager.addItem();
          break;

        case "del":
          manager.deleteItem();
          break;

        case "edit":
          manager.updateItem();
          break;

        case "ls":
          if (line.contains("name")) manager.sortByName();
          if (line.contains("date")) manager.sortByDate();
          if (line.contains("desc")) manager.reverseList();
          manager.printAll();
          break;

        case "?":
          displayHelp();
          break;

        case "exit":
          quit = true;
          break;

        default:
          System.out.println("? for help.");
          break;
      }
    } while (!quit);
  }
}
```

Sample Code: TodoItem.java
```
package pstudio.j071;

import java.text.SimpleDateFormat;
import java.util.Date;

public class TodoItem {
  private String title;
  private String detail;
  private Date reg_date;

  public TodoItem(String title, String detail){
    this.title = title;
    this.detail = detail;
    this.reg_date = new Date();
  }

  // getters & setters in here!!

  @Override
  public String toString() {
    return "[" + title + "] " + detail + " - " +
      new SimpleDateFormat("yyyy/MM/dd").format(reg_date);
  }
}
```

Sample Code: iCRUD.java
```
package pstudio.j071;

public interface iCRUD {
  public Object createItem();
  public int addItem();
  public int updateItem();
  public int deleteItem();
  public void printItem();
}
```

Sample Code: TodoCRUD.java
```
package pstudio.j071;

import java.util.*;

public class TodoCRUD implements iCRUD {
  private ArrayList<TodoItem> list;

  public TodoCRUD() {
    this.list = new ArrayList<TodoItem>();
  }

  @Override
  public int addItem() {
    String title, desc;
    Scanner sc = new Scanner(System.in);

    System.out.print("Add a Todo item\n"
        + "Enter the title: ");
    title = sc.nextLine().trim();
    if (isDuplicated(title)) {
      System.out.println("Title can't be duplicated.");
      return 1;
    }

    System.out.print("Enter the detail: ");
    desc = sc.nextLine().trim();

    TodoItem t = new TodoItem(title, desc);
    this.list.add(t);
    System.out.println("item added.");
    return 0;
  }

  @Override
  public int updateItem() {

  }

  @Override
  public int deleteItem() {

  }

  boolean isDuplicated(String title){
    for (TodoItem item : this.list) {
      if (title.equals(item.getTitle())) {
        return true;
      }
    }
    return false;
  }

  public int printAll() {
    Scanner sc = new Scanner(System.in);
    System.out.println("Total " + this.list.size() + " items.");
    for (TodoItem item : this.list) {
      System.out.println(item.toString());
    }
    return 0;
  }

  public void sortByName() {
    Collections.sort(this.list, new TodoitemNameComparator());
  }

  public void sortByDate() {
    Collections.sort(this.list, new TodoitemDateComparator());
  }

  public void reverseList() {
    Collections.reverse(this.list);
  } 
}

class TodoitemNameComparator implements Comparator<TodoItem> {
  @Override
  public int compare(TodoItem o1, TodoItem o2) {
    return o1.getTitle().compareTo(o2.getTitle());
  }
}

class TodoitemDateComparator implements Comparator<TodoItem> {
  @Override
  public int compare(TodoItem o1, TodoItem o2) {
    return o1.getReg_date().compareTo(o2.getReg_date());
  }
}
```

===

실행 예 :
```
> ?
Usage of commands
1. Add a new item ( add )
2. Delete an existing item ( del )
3. Update an item ( edit )
4. List all items ( ls )
5. sort the list by name ( ls name )
6. sort the list by name descending ( ls name desc )
7. sort the list by date ( ls date )
8. sort the list by date descending ( ls date desc )
9. show commands guidlines ( ? )
10. quit program ( exit )

> add  
Add a Todo item  
Enter the title: class1  
Enter the detail: 4/23 14:30 NTH412 Programming Studio  
item added.

> add  
Add a Todo item  
Enter the title: project1  
Enter the detail: Capstone Project Team Meeting  
item added.

> ls  
Total 2 items  
[class1] 4/23 14:30 NTH412 Programming Studio - 2024/04/22  
[project1] Capstone Project Team Meeting - 2024/04/22  

> edit  
Edit a Todo Item  
Enter the title of the item to edit: class  
Not found.

> edit  
Edit a Todo Item  
Enter the title of the item to edit: class1  
[class1] 4/23 14:30 NTH412 Programming Studio - 2024/04/22  
Enter the detail: 4/24 NTH313 Web Service  
item updated.

> ls  
Total 2 items  
[class1] 4/24 NTH313 Web Service - 2024/04/22  
[project1] Capstone Project Team Meeting - 2024/04/22

> ls name desc  
[project1] Capstone Project Team Meeting - 2024/04/22  
[class1] 4/24 NTH313 Web Service - 2024/04/22

> ls name  
[class1] 4/24 NTH313 Web Service - 2024/04/22  
[project1] Capstone Project Team Meeting - 2024/04/22  

> del  
Delete a Todo Item  
Enter the title of the item to remove: meeting  
Not found.

> del  
Delete a Todo Item  
Enter the title of the item to remove: meeting1  
Not found.

> del  
Delete a Todo Item  
Enter the title of the item to remove: project1  
[project1] Capstone Project Team Meeting - 2024/04/22  
item deleted.

> ls  
Total 1 items  
[class1] 4/24 NTH313 Web Service - 2024/04/22  

> exit
```