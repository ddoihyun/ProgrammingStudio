package J061;

import java.util.ArrayList;
import java.util.Scanner;

public class WordCRUD {
    ArrayList<Word> list;
    Scanner s;

    public WordCRUD() {
        list = new ArrayList<Word>();
        s = new Scanner(System.in);
    }

    void addWord() {
        String english, korean;
        int level;
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
        listWord();
        System.out.print("Edit number > ");
        int id = s.nextInt();
        if(id > 0 && id <= list.size()){
            System.out.print("New English (current: " + list.get(id - 1).getEnglish() + ") > ");
            String english = s.next();
            s.nextLine();
            System.out.print("New Korean (current: " + list.get(id - 1).getKorean() + ") > ");
            String korean = s.nextLine();
            System.out.print("New Level (1-3, current: " + list.get(id - 1).getLevel() + ") > ");
            int level = s.nextInt();
            Word word = list.get(id - 1);
            word.setEnglish(english);
            word.setKorean(korean);
            word.setLevel(level);
        } else {
            System.out.println("Invalid number!");
        }
    }

    void listWord() {
        for (int i = 0; i < list.size(); i++)
            System.out.printf("%d - %s\n", i + 1, list.get(i).toString());
    }

    void deleteWord() {
        listWord();
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