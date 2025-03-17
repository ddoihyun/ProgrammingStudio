/*
* [Full Name] : 곽도현
* [Student ID] : 22200034
* [Honor Code Pledge] : 나 곽도현은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct st_person{
    char name[20];  // 이름 (빈칸 없는 영어문자열)
    int birthdate;  // 생년월일 (8자리 숫자)
    int age;    // 나이
    int year, month, day;  // 생년, 월, 일
} PERSON;

const char *monthnames[12]  = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

void setPerson(PERSON* p){      // 구조체 포인터 p 내의 멤버변수 값을 계산해서 넣는 함수
    p->year = p->birthdate / 10000;
    p->month = (p->birthdate % 10000) / 100;
    p->day = p->birthdate % 100;
    p->age = 2025 - p->year;
}

void printPerson(PERSON* p){    // 구조체 포인터 p 내용을 출력하는 함수
    printf("%s - %d (%s %d, %d)\n", p->name, p->age, 
        monthnames[p->month-1], p->day, p->year);
}


int main(void){
    PERSON* one;
    one = (PERSON*)malloc(sizeof(PERSON));
    scanf("%s %d", one->name, &one->birthdate);
    setPerson(one);
    printPerson(one);

    return 0;
}
