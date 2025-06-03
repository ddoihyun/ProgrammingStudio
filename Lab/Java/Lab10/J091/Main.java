import java.io.*;
import java.util.Scanner;

public class Main {
    Scanner s = new Scanner(System.in);
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J091();
    }

    void J091(){
        String filename = "data.txt";
        ScoreManager manager = new ScoreManager();
        manager.start(filename);
    }
}