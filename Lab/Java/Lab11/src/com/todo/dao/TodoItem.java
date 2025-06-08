package com.todo.dao;

import java.text.SimpleDateFormat;
import java.util.Date;

public class TodoItem {
    private String title;
    private String desc;
    // private Date current_date;
    private String current_date;
    private String category;
    private String due_date;

    public TodoItem(String title, String desc){
        this.title=title;
        this.desc=desc;
        SimpleDateFormat f = new SimpleDateFormat("yyyy/MM/dd kk:mm:ss");
        // this.current_date=new Date();
        this.current_date=f.format(new Date());
    }

    public TodoItem(String title, String desc, String current_date) {
        this.title = title;
        this.desc = desc;
        this.current_date = current_date;
    }

    public TodoItem(String title, String desc, String category, String due_date) {
        this(title, desc);
        this.category = category;
        this.due_date = due_date;
    }

    public TodoItem(String title, String desc, String category, String due_date, String current_date) {
        this.title = title;
        this.desc = desc;
        this.category = category;
        this.due_date = due_date;
        this.current_date = current_date;
    }
    
    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getDesc() {
        return desc;
    }

    public void setDesc(String desc) {
        this.desc = desc;
    }

    // public Date getCurrent_date() {
    //     return current_date;
    // }

    public String getCurrent_date() {
        return current_date;
    }

    // public void setCurrent_date(Date current_date) {
    //     this.current_date = current_date;
    // }

    public String getCategory() {
        return category;
    }

    public void setCategory(String category) {
        this.category = category;
    }

    public String getDueDate() {
        return due_date;
    }

    public void setDueDate(String due_date) {
        this.due_date = due_date;
    }

    public void setCurrent_date(String current_date) {
        this.current_date = current_date;
    }

    // public String toString(){
    //     return "["+ title + "] " + desc + " - " + current_date;
    // }
    public String toString() {
        // [카테고리] 제목 - 내용 - 마감일자 - 생성일시
        return "[" + category + "] " + title 
             + " - " + desc 
             + " - " + due_date 
             + " - " + current_date;
    }

    // public String toSaveString(){
    //     return title + "##" + desc + "##" + current_date + "\n";
    // }
    public String toSaveString() {
        return title + "##" 
             + desc + "##" 
             + category + "##" 
             + due_date + "##" 
             + current_date + "\n";
    }
}
