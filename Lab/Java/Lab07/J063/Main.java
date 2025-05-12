package J063;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J063();
    }

    void J063() {
        int menu, quit = 0;
            Scanner s = new Scanner(System.in);
            TodoCRUD manager = new TodoCRUD();
            while (true) {
            System.out.print("\nMenu> 1. Add 2. Edit 3. List 4. Delete 0. Exit > ");
            menu = s.nextInt();
            switch (menu) {
                case 1: manager.addTodo(); break;
                case 2: manager.editTodo(); break;
                case 3: manager.listTodo(); break;
                case 4: manager.deleteTodo(); break;
                default: quit = 1;
            }
            if (quit == 1) break;
            }
            s.close();
    }
}