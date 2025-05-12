package J063;

import java.util.ArrayList;
import java.util.Scanner;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class TodoCRUD {
    ArrayList<Todo> list;
    Scanner s;

    public TodoCRUD() {
        list = new ArrayList<Todo>();
        s = new Scanner(System.in);
    }

    void addTodo() {
        System.out.print("Title > ");
        String title = s.nextLine(); 
    
        System.out.print("Detail > ");
        String detail = s.nextLine();
    
        Date regDate = null;
        while (regDate == null) {
            System.out.print("Date (yyyy/MM/dd) > ");
            String dateStr = s.nextLine();
            try {
                SimpleDateFormat sdf = new SimpleDateFormat("yyyy/MM/dd");
                sdf.setLenient(false);
                regDate = sdf.parse(dateStr);
            } catch (ParseException e) {
                System.out.println("잘못된 날짜 형식입니다. 다시 입력해주세요.");
            }
        }

        System.out.print("Category > ");
        String category = s.nextLine();
    
        
        list.add(new Todo(title, detail, regDate, category));
    }
    
    void editTodo() {
        listTodo();
        System.out.print("Edit number > ");
        int id = Integer.parseInt(s.nextLine());
    
        if (id < 1 || id > list.size()) {
            System.out.println("Invalid number!");
            return;
        }
    
        Todo td = list.get(id - 1);
    
        System.out.print("New Title (current: " + td.getTitle() + ") > ");
        String title = s.nextLine();
    
        System.out.print("New Writer (current: " + td.getDetail() + ") > ");
        String detail = s.nextLine();
    
        System.out.print("New Date (current: " + td.getRegDate() + ") > ");
        Date regDate = null;
        while (regDate == null) {
            System.out.print("New Date (yyyy/MM/dd) / (current: " + td.getRegDate() + ") > ");
            String dateStr = s.nextLine();
            try {
                SimpleDateFormat sdf = new SimpleDateFormat("yyyy/MM/dd");
                sdf.setLenient(false);
                regDate = sdf.parse(dateStr);
            } catch (ParseException e) {
                System.out.println("Invalid Date. Try again");
            }
        }
        System.out.print("New Category (current: " + td.getCategory() + ") > ");
        String category = s.nextLine();
    
        td.setTitle(title);
        td.setDetail(detail);
        td.setRegDate(regDate);
        td.setCategory(category);
    }
    
    void listTodo() {
        for (int i = 0; i < list.size(); i++)
            System.out.printf("%d - %s\n", i + 1, list.get(i).toString());
    }

    void deleteTodo() {
        listTodo();
        System.out.print("Delete number > ");
        int id = s.nextInt();
        if(id > 0 && id <= list.size()){
            list.remove(id - 1);
            System.out.println("Deleted.");
        } else {
            System.out.println("Invalid number!");
        }
    }
}