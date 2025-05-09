#include <stdio.h>

int main(void){
    const char *monthnames[12]  = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    char name[20];  // 이름 (빈칸 없는 영어문자열)
    int birthdate;  // 생년월일 (8자리 숫자)

    scanf("%s %d", name, &birthdate);
    
    int age = 2025 - (birthdate / 10000);   // 나이
    int year = birthdate / 10000;
    int month = (birthdate / 100) % 100;
    int day = birthdate % 100;

    printf("%s - %d (%s %d, %d)\n", name, age, 
        monthnames[month-1], day, year);
    return 0;
}