package J061;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J061();
    }

    void J061() {
        int menu, quit = 0;
            Scanner s = new Scanner(System.in);
            WordCRUD manager = new WordCRUD();
            while (true) {
            System.out.print("Menu> 1. Add 2. Edit 3. List 4. Delete 0. Exit > ");
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
            s.close();
    }
}