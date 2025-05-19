public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J083();
    }

    void J083() {
        ScoreManager manager = new ScoreManager();
        manager.loadScores("data.txt");

        manager.printSubjectStats();
        manager.printStudentStats();
        manager.printTopStudent();
    }
}
