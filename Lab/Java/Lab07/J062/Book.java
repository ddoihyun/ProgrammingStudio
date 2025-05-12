package J062;

public class Book {
    private int price;
    private int year;
    private String title;
    private String writer;
    private String category;

    Book(){}
    Book(String title, String writer, String category, int price, int year){
        this.title = title;
        this.writer = writer;
        this.category = category;
        this.price = price;
        this.year = year;
    }

    @Override
    public String toString() {
        String str = String.format("%-20s", title)
                + String.format("%15s", writer) + " | "
                + String.format("%s", category) + " | "
                + String.format("[%s] ", year)
                + String.format("%s", price);

        return str;}

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getWriter() {
        return writer;
    }

    public void setWriter(String writer) {
        this.writer = writer;
    }

    public String getCategory() {
        return category;
    }

    public void setCategory(String category) {
        this.category = category;
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public int getYear() {
        return year;
    }

    public void setYear(int year) {
        this.year = year;
    }

}