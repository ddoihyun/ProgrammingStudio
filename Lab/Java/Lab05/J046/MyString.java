public class MyString {
    public static int whichFirst(String str1, String str2) {
        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();

        // str1.compareTo(str2) -> return str1 - st2
        if (str1.compareTo(str2) <= 0) return 1;
        else return 2;
    }
}
