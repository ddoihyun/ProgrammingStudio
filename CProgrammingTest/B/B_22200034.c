#include <stdio.h>

int main(void){
    const char *monthnames[12]  = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    char names[100][20];  // 이름 (빈칸 없는 영어문자열)
    int birthdate[100];  // 생년월일 (8자리 숫자)
    int age;        // 나이
    int count;      // 입력받을 인원 수
    int max_index = 0;  // 가장 나이가 많은 사람의 인덱스
    scanf("%d", &count);

    for(int i=0; i<count; i++){
        scanf("%s %d", names[i], &birthdate[i]);
        if (birthdate[i] < birthdate[max_index]) max_index = i;
    }

    int max_age = 2025 - (birthdate[max_index] / 10000);
    int year = birthdate[max_index] / 10000;
    int month = (birthdate[max_index] / 100) % 100;
    int day = birthdate[max_index] % 100;

    printf("%s - %d (%s %d, %d)\n", names[max_index], max_age, 
            monthnames[(birthdate[max_index] / 100) % 100 - 1], birthdate[max_index] % 100, birthdate[max_index] / 10000);
    return 0;
}