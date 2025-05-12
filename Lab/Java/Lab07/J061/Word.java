package J061;

public class Word {
    private int level;
    private String english;
    private String korean;

    Word(){}
    Word(String english, String korean, int level){
        this.english = english;
        this.korean = korean;
        this.level = level;
    }

    @Override
    public String toString() {
        String slevel = "";
        for(int i=0; i<level; i++) slevel +="*";
        String str = String.format("%-3s", slevel)
                + String.format("%15s",english) +" | "+ korean;
        return str;}

    public int getLevel() {
        return level;
    }

    public void setLevel(int level) {
        this.level = level;
    }

    public String getEnglish() {
        return english;
    }

    public void setEnglish(String english) {
        this.english = english;
    }

    public String getKorean() {
        return korean;
    }

    public void setKorean(String korean) {
        this.korean = korean;
    }


}