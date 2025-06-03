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
        calculate();
    }

    // 총점(sum)과 평균(avg)을 계산
    private void calculate() {
        this.sum = kor + eng + mat;
        this.avg = sum / 3.0;
    }

    public String getName() { return name; }
    public int getKor()   { return kor; }
    public int getEng()   { return eng; }
    public int getMat()   { return mat; }
    public int getSum()   { return sum; }
    public double getAvg(){ return avg; }

    public void setKor(int kor) {
        this.kor = kor;
        calculate();
    }
    public void setEng(int eng) {
        this.eng = eng;
        calculate();
    }
    public void setMat(int mat) {
        this.mat = mat;
        calculate();
    }

    @Override
    public String toString() {
        return String.format(
            "%s: Korean = %d, English = %d, Math = %d, Total = %d, Average = %.2f",
            name, kor, eng, mat, sum, avg
        );
    }
}