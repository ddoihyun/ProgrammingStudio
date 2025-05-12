package J062;

import java.util.ArrayList;
import java.util.Scanner;

public class BookCRUD {
    ArrayList<Book> list;
    Scanner s;

    public BookCRUD() {
        list = new ArrayList<Book>();
        s = new Scanner(System.in);
    }

    void addBook() {
        System.out.print("Title > ");
        String title = s.nextLine(); 
    
        System.out.print("Writer > ");
        String writer = s.nextLine();
    
        System.out.print("Category > ");
        String category = s.nextLine();
    
        int price;
        while (true) {
            System.out.print("Price > ");
            String line = s.nextLine();
            try {
                price = Integer.parseInt(line);
                break;
            } catch (NumberFormatException e) {
                System.out.println("숫자 형식이 올바르지 않습니다. 다시 입력해주세요.");
            }
        }
    
        int year;
        while (true) {
            System.out.print("Year > ");
            String line = s.nextLine();
            try {
                year = Integer.parseInt(line);
                break;
            } catch (NumberFormatException e) {
                System.out.println("숫자 형식이 올바르지 않습니다. 다시 입력해주세요.");
            }
        }
    
        list.add(new Book(title, writer, category, price, year));
    }
    
    void editBook() {
        listBook();
        System.out.print("Edit number > ");
        int id = Integer.parseInt(s.nextLine());
    
        if (id < 1 || id > list.size()) {
            System.out.println("Invalid number!");
            return;
        }
    
        Book b = list.get(id - 1);
    
        System.out.print("New Title (current: " + b.getTitle() + ") > ");
        String title = s.nextLine();
    
        System.out.print("New Writer (current: " + b.getWriter() + ") > ");
        String writer = s.nextLine();
    
        System.out.print("New Category (current: " + b.getCategory() + ") > ");
        String category = s.nextLine();
    
        int price;
        while (true) {
            System.out.print("New Price (current: " + b.getPrice() + ") > ");
            String line = s.nextLine();
            try {
                price = Integer.parseInt(line);
                break;
            } catch (NumberFormatException e) {
                System.out.println("숫자 형식이 올바르지 않습니다. 다시 입력해주세요.");
            }
        }
    
        int year;
        while (true) {
            System.out.print("New Year (current: " + b.getYear() + ") > ");
            String line = s.nextLine();
            try {
                year = Integer.parseInt(line);
                break;
            } catch (NumberFormatException e) {
                System.out.println("Invalid number. Try agin.");
            }
        }
    
        b.setTitle(title);
        b.setWriter(writer);
        b.setCategory(category);
        b.setPrice(price);
        b.setYear(year);
    }
    
    void listBook() {
        for (int i = 0; i < list.size(); i++)
            System.out.printf("%d - %s\n", i + 1, list.get(i).toString());
    }

    void deleteBook() {
        listBook();
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