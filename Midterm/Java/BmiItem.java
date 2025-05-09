class BmiItem {
    private String name;
    private int height;
    private int weight;
    private double bmi;
    private String level;

    public BmiItem(String name, int height, int weight){
        this.name = name;
        this.height = height;
        this.weight = weight;
        this.bmi = weight / (height*0.01*height*0.01);
        resetLevel();
    }

    public void resetLevel(){
        if (bmi<18.5) this.level = "Underweight";
        else if (bmi < 25) this.level = "Healthy Weight";
        else if (bmi < 30) this.level = "Overweight";
        else this.level = "Obesity";
    }
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public int getWeight() {
        return weight;
    }

    public void setWeight(int weight) {
        this.weight = weight;
    }

    public double getBmi() {
        return bmi;
    }

    public void setBmi(double bmi) {
        this.bmi = bmi;
    }

    public String getLevel() {
        return level;
    }

    public void setLevel(String level) {
        this.level = level;
    }

    public String toString() {
        return String.format("%-10s", name) + " [h:" + height + ", w:" + weight + "] " + String.format("%.1f", bmi) + " - " + level ;
    }
}
