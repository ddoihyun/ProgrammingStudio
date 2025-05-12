package J063;

import java.text.SimpleDateFormat;
import java.util.Date;

public class Todo {
    private String title;
    private String detail;
    private Date regDate;
    private String category;

    Todo(){}
    Todo(String title, String detail, Date regDate, String category){
        this.title = title;
        this.detail = detail;
        this.regDate = regDate;
        this.category = category;
    }

    @Override
    public String toString() {
      return "[" + title + "] " + detail + " - " +
        new SimpleDateFormat("yyyy/MM/dd").format(regDate);
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getDetail() {
        return detail;
    }

    public void setDetail(String detail) {
        this.detail = detail;
    }

    public Date getRegDate() {
        return regDate;
    }

    public void setRegDate(Date regDate) {
        this.regDate = regDate;
    }

    public String getCategory() {
        return category;
    }

    public void setCategory(String category) {
        this.category = category;
    }

}