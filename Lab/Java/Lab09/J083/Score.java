public class Score {
    private String name;
    private int kor, eng, mat;
    private int sum;
    private double avg;

    public Score(String name, int kor, int eng, int mat) {
        this.name = name;
        this.kor = kor;
        this.eng = eng;
        this.mat = mat;
        this.sum = kor + eng + mat;
        this.avg = sum / 3.0;
    }

    public int getKor() { return kor; }
    public int getEng() { return eng; }
    public int getMat() { return mat; }
    public int getSum() { return sum; }
    public double getAvg() { return avg; }
    public String getName() { return name; }

    @Override
    public String toString() {
        return name + " - Total = " + sum + ", Average = " + String.format("%.2f", avg);
    }
}
