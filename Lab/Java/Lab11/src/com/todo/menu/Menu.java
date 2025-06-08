package com.todo.menu;
public class Menu {

    // public static void displaymenu(){
    //     System.out.println();
    //     System.out.println("1. Add a new item ( add )");
    //     System.out.println("2. Delete an existing item ( del )");
    //     System.out.println("3. Update an item  ( edit )");
    //     System.out.println("4. List all items ( ls )");
    //     System.out.println("5. sort the list by name ( ls_name_asc )");
    //     System.out.println("6. sort the list by name ( ls_name_desc )");
    //     System.out.println("7. sort the list by date ( ls_date )");
    //     System.out.println("8. exit (Or press escape key to exit)");
    //     System.out.println("Enter your choice >");
    // }

    public static void displaymenu() {
        System.out.println("\n=== 명령어 목록 ===");
        System.out.println("add              : 항목 추가");
        System.out.println("del              : 항목 삭제");
        System.out.println("edit             : 항목 수정");
        System.out.println("find <키워드>    : 제목/내용에 키워드 포함 항목 검색");
        System.out.println("find_cate <키워드>: 카테고리 키워드 검색");  // 이 줄 추가
        System.out.println("ls               : 전체 목록 출력");
        System.out.println("ls_name_asc      : 제목 오름차순 정렬");
        System.out.println("ls_name_desc     : 제목 내림차순 정렬");
        System.out.println("ls_date          : 날짜순 정렬");
        System.out.println("help             : 도움말 출력");
        System.out.println("exit             : 프로그램 종료");
    }

    public static void prompt(){
        System.out.print("\nCommand > ");
    }
}
