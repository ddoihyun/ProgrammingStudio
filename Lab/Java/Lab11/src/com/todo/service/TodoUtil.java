package com.todo.service;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.*;

import com.todo.dao.TodoItem;
import com.todo.dao.TodoList;

public class TodoUtil {
	
	public static void createItem(TodoList list) {
		
		String title, desc;
		Scanner sc = new Scanner(System.in);
		
		System.out.print("[항목 추가]\n"
						+ "제목 > ");
		
		title = sc.nextLine().trim();
		if (list.isDuplicate(title)) {
			System.out.printf("제목이 중복됩니다!");
			return;
		}
		// sc.nextLine();
		System.out.print("내용 > ");
		desc = sc.nextLine().trim();
		
		System.out.print("카테고리 > ");
        String category = sc.nextLine().trim();
        System.out.print("마감일자(yyyy/MM/dd) > ");
        String due_date = sc.nextLine().trim();

		// TodoItem t = new TodoItem(title, desc);
		TodoItem item = new TodoItem(title, desc, category, due_date);
		list.addItem(item);
		System.out.println("추가되었습니다.");
	}

	public static void deleteItem(TodoList list) {
		
		Scanner sc = new Scanner(System.in);
		
		// System.out.print("[항목 삭제]\n"
		// 		+ "삭제할 항목의 제목을 입력하시오 > ");
		System.out.print("[항목 삭제]\n삭제할 항목의 번호를 입력하세요 > ");
        int num;

		// String title = sc.next();

		// for (TodoItem item : l.getList()) {
		// 	if (title.equals(item.getTitle())) {
		// 		l.deleteItem(item);
		// 		System.out.println("삭제되었습니다.");
		// 		break;
		// 	}
		// }

		try {
            num = Integer.parseInt(sc.nextLine().trim());
        } catch (NumberFormatException e) {
            System.out.println("유효하지 않은 번호입니다.");
            return;
        }
        List<TodoItem> items = list.getList();
        if (num < 1 || num > items.size()) {
            System.out.println("유효하지 않은 번호입니다.");
            return;
        }
    TodoItem target = items.get(num - 1);
    System.out.printf("%d. %s\n", num, target.toString());

    System.out.print("위 항목을 삭제하겠습니까? (y/n) > ");
    String choice = sc.nextLine().trim();

    if (choice.equalsIgnoreCase("y")) {
        list.deleteItem(target);
        System.out.println("삭제되었습니다.");
    } else  return;
	}

	public static void updateItem(TodoList list) {
		
		Scanner sc = new Scanner(System.in);
		
		// System.out.print("[항목 수정]\n"
		// 		+ "수정할 항목의 제목을 입력하시오 > ");
		System.out.print("[항목 수정]\n수정할 항목의 번호를 입력하세요 > ");
        int num;

		String title = sc.nextLine().trim();
		
		// if (!list.isDuplicate(title)) {
		// 	System.out.println("없는 제목입니다!");
		// 	return;
		// }
		try {
            num = Integer.parseInt(sc.nextLine().trim());
        } catch (NumberFormatException e) {
            System.out.println("유효하지 않은 번호입니다.");
            return;
        }
        List<TodoItem> items = list.getList();
        if (num < 1 || num > items.size()) {
            System.out.println("유효하지 않은 번호입니다.");
            return;
        }
        TodoItem oldItem = items.get(num - 1);

		// System.out.print("새 제목  > ");
		// String new_title = sc.nextLine().trim();
		// if (list.isDuplicate(new_title)) {
		// 	System.out.println("제목이 중복됩니다!");
		// 	return;
		// }
		// sc.nextLine();
		// System.out.print("새 내용  > ");
		// String new_description = sc.nextLine().trim();
		// for (TodoItem item : l.getList()) {
		// 	if (item.getTitle().equals(title)) {
		// 		l.deleteItem(item);
		// 		TodoItem t = new TodoItem(new_title, new_description);
		// 		l.addItem(t);
		// 		System.out.println("수정되었습니다.");
		// 	}
		// }

		System.out.print("새 제목 > ");
        String new_title = sc.nextLine().trim();
		if (list.isDuplicate(new_title)) {
			System.out.println("제목이 중복됩니다!");
			return;
		}
        System.out.print("새 내용 > ");
        String new_desc = sc.nextLine().trim();
        System.out.print("새 카테고리 > ");
        String new_category = sc.nextLine().trim();
        System.out.print("새 마감일자(yyyy/MM/dd) > ");
        String new_due_date = sc.nextLine().trim();

        TodoItem newItem = new TodoItem(
            new_title, new_desc, new_category, new_due_date, oldItem.getCurrent_date()
        );
        list.editItem(oldItem, newItem);
        System.out.println("수정되었습니다.");
	}

	public static void findItem(TodoList list, String keyword) {
        List<TodoItem> items = list.getList();
        System.out.println("[검색] 키워드: " + keyword);
        int count = 0;
        int idx = 1;
        for (TodoItem item : items) {
            if (item.getTitle().contains(keyword) 
             || item.getDesc().contains(keyword)) {
                System.out.printf("%d. %s\n", idx, item.toString());
                count++;
            }
            idx++;
        }
        System.out.println("총 " + count + "개의 항목을 찾았습니다.");
    }

	public static void findCateItem(TodoList list, String keyword) {
		List<TodoItem> items = list.getList();
		// System.out.println("[카테고리 검색] 키워드: " + keyword);
		int count = 0;
		int idx = 1;
		for (TodoItem item : items) {
			if (item.getCategory() != null && item.getCategory().contains(keyword)) {
				System.out.printf("%d. %s\n", idx, item.toString());
				count++;
			}
			idx++;
		}
		System.out.println("총 " + count + "개의 항목을 찾았습니다.");
	}

	public static void listAll(TodoList l) {
        List<TodoItem> items = l.getList();
        System.out.println("\n[전체 목록, 총 " + items.size() + "개]");
        int idx = 1;
        for (TodoItem item : items) {
            System.out.printf("%d. %s\n", idx++, item.toString());
        }
	}

	/**
     * 프로그램 종료 시 리스트를 파일에 저장
     */
    // public static void saveList(TodoList l, String filename) {
    //     try (FileWriter fw = new FileWriter(filename)) {
    //         for (TodoItem item : l.getList()) {
    //             fw.write(item.toSaveString());
    //         }
    //         System.out.println("파일이 저장되었습니다.");
    //     } catch (IOException e) {
    //         System.err.println("파일 저장 중 오류가 발생했습니다.");
    //         e.printStackTrace();
    //     }
    // }

    public static void saveList(TodoList list, String filename) {
        try (FileWriter fw = new FileWriter(filename)) {
            for (TodoItem item : list.getList()) {
                fw.write(item.toSaveString());
            }
            System.out.println("파일이 저장되었습니다.");
        } catch (IOException e) {
            System.err.println("파일 저장 중 오류가 발생했습니다.");
            e.printStackTrace();
        }
    }

    /**
     * 프로그램 시작 시 파일에서 리스트를 읽어옴
     */
    // public static void loadList(TodoList l, String filename) throws FileNotFoundException {
    //     String line;
	// 	int count = 0;
	// 	try (BufferedReader br = new BufferedReader(new FileReader(filename))) {
    //         while ((line = br.readLine()) != null) {
    //             StringTokenizer st = new StringTokenizer(line, "##");
    //             String title = st.nextToken();
    //             String desc = st.nextToken();
    //             String current_date = st.nextToken();
    //             TodoItem item = new TodoItem(title, desc, current_date);
    //             l.addItem(item);
	// 			count++;
    //         }
	// 		br.close();
	// 		System.out.println(count + "개의 항목을 읽었습니다.");
    //     } catch (FileNotFoundException e) {
	// 		System.out.println(filename+ "파일이 없습니다.");
    //         // e.printStackTrace();
    //     } catch (IOException e) {
    //         System.err.println("파일 읽기 중 오류가 발생했습니다.");
    //         e.printStackTrace();
    //     }
    // }

	public static void loadList(TodoList list, String filename) throws FileNotFoundException {
        int count = 0;
        try (BufferedReader br = new BufferedReader(new FileReader(filename))) {
            String line;
            while ((line = br.readLine()) != null) {
                StringTokenizer st = new StringTokenizer(line, "##");
                String title       = st.nextToken();
                String desc        = st.nextToken();
                String category    = st.nextToken();
                String due_date    = st.nextToken();
                String current_date= st.nextToken();
                TodoItem item = new TodoItem(title, desc, category, due_date, current_date);
                list.addItem(item);
                count++;
            }
            System.out.println(count + "개의 항목을 읽었습니다.");
        } catch (FileNotFoundException e) {
            // System.out.println(filename + " 파일이 없습니다.");
            throw e;
        } catch (IOException e) {
            System.err.println("파일 읽기 중 오류가 발생했습니다.");
            e.printStackTrace();
        }
    }
}
