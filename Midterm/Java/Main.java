import java.util.Scanner;

public class Main {
    private BmiItem[] list;
    private int count=0;

    public static void main(String[] args) {
        Main bmi_manager = new Main(50);
        bmi_manager.run();
    }

    public static void printMenu(){
        System.out.print("\n[Menu] "+
        "1. Add "+
        "2. List "+
        "3. Search "+
        "4. Multiple Add "+
        "0. Quit > ");
    }

    Main(int max){
        list = new BmiItem[max];
    }
    
    public void run() {
        Scanner s = new Scanner(System.in);
        boolean quit = false;
        do {
            printMenu();
            int menu = s.nextInt();
            switch (menu) {
                case 1:
                    addItem();
                    break;

                case 2:
                    printAll();
                    break;

                case 3:
                    searchItem();
                    break;

                case 4:
                    addItems();
                    break;

                case 0:
                    quit = true;
                    break;

                default:
                    System.out.println("> Wrong number.\n");
                    break;
            }
        } while (!quit);
    }

    public int addItem() {
        String name;
        int height, weight;
        Scanner s = new Scanner(System.in);

        System.out.print("> Add a new record\n"
                + "> Enter your name: ");
        name = s.nextLine().trim();

        System.out.print("> Enter height and weight: ");
        height = s.nextInt();
        weight = s.nextInt();

        list[count] = new BmiItem(name, height, weight);
        count++;
        System.out.println("> A record added.");
        return 0;
    }

    public int addItems() {
        String name;
        int height, weight;
        Scanner s = new Scanner(System.in);

        System.out.print("> Add multiple records\n"
                + "> How many records? ");
        int size = s.nextInt();
        s.nextLine();

        for(int i=0; i<size; i++){
            name = s.nextLine().trim();
            height = s.nextInt();
            weight = s.nextInt();
            s.nextLine();
            list[count] = new BmiItem(name, height, weight);
            count++;
        }

        System.out.println("> " + size + " records added.");
        return size;
    }

    public void searchItem() {
        String name;
        int found = 0;
        Scanner s = new Scanner(System.in);
        System.out.print("> Enter a name: ");
        name = s.nextLine().trim();
        name = name.toLowerCase();
    
        for (int i = 0; i < count; i++) {
            if (list[i].getName().toLowerCase().contains(name)) {
                System.out.print("[" + (i + 1) + "] ");
                System.out.println(list[i].toString());
                found++;
            }
        }
    
        System.out.println("> " + found + " records found.");
    }
    
    public void printAll() {
        System.out.println("> Total " + count + " records");
        for (int i=0; i<count; i++) {
            System.out.print("[" + (i+1) + "] ");
            System.out.println(list[i].toString());
        }
    }    
}