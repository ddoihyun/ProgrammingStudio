package J071;

import java.util.*;

public class TodoCRUD implements iCRUD {
  private ArrayList<TodoItem> list;

  public TodoCRUD() {
      this.list = new ArrayList<TodoItem>();
  }

  @Override
  public Object createItem() {
      // 필요시 구현; 현재는 사용되지 않으므로 null 반환
      return null;
  }

  @Override
  public int addItem() {
      Scanner sc = new Scanner(System.in);
      System.out.print("Add a Todo item\nEnter the title: ");
      String title = sc.nextLine().trim();
      if (isDuplicated(title)) {
          System.out.println("Title can't be duplicated.");
          return 1;
      }
      System.out.print("Enter the detail: ");
      String desc = sc.nextLine().trim();

      TodoItem t = new TodoItem(title, desc);
      this.list.add(t);
      System.out.println("item added.");
      return 0;
  }

  @Override
  public int updateItem() {
      Scanner sc = new Scanner(System.in);
      System.out.println("Edit a Todo Item");
      System.out.print("Enter the title of the item to edit: ");
      String title = sc.nextLine().trim();
      for (TodoItem item : list) {
          if (item.getTitle().equals(title)) {
              System.out.println(item.toString());
              System.out.print("Enter the detail: ");
              String newDetail = sc.nextLine().trim();
              item.setDetail(newDetail);
              System.out.println("item updated.");
              return 0;
          }
      }
      System.out.println("Not found.");
      return 1;
  }

  @Override
  public int deleteItem() {
      Scanner sc = new Scanner(System.in);
      System.out.println("Delete a Todo Item");
      System.out.print("Enter the title of the item to remove: ");
      String title = sc.nextLine().trim();
      // To prevent ConcurrentModificationException
      Iterator<TodoItem> it = list.iterator();
      while (it.hasNext()) {
          TodoItem item = it.next();
          if (item.getTitle().equals(title)) {
              System.out.println(item.toString());
              it.remove();
              System.out.println("item deleted.");
              return 0;
          }
      }
      System.out.println("Not found.");
      return 1;
  }

  @Override
  public void printItem() {
      printAll();
  }

  public int printAll() {
      System.out.println("Total " + list.size() + " items.");
      for (TodoItem item : list) {
          System.out.println(item.toString());
      }
      return 0;
  }

  public void sortByName() {
      Collections.sort(list, new TodoitemNameComparator());
  }

  public void sortByDate() {
      Collections.sort(list, new TodoitemDateComparator());
  }

  public void reverseList() {
      Collections.reverse(list);
  }

  private boolean isDuplicated(String title) {
      for (TodoItem item : list) {
          if (item.getTitle().equals(title)) {
              return true;
          }
      }
      return false;
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