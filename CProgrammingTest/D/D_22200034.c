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

int loadPersons(PERSON* list[]){
    int count;
    scanf("%d", &count);

    for(int i=0; i<count; i++){
        list[i] = (PERSON *) malloc(sizeof(PERSON));
        scanf("%s %d", list[i]->name, &list[i]->birthdate);
        setPerson(list[i]);
    }
    return count;
}


PERSON* oldestPerson(PERSON* list[], int size){
    PERSON* oldest = list[0];
    for(int i=1; i<size; i++){
        if (list[i]->birthdate < oldest->birthdate) oldest = list[i];
    }
    return oldest;
}

PERSON* youngestPerson(PERSON* list[], int size){
    PERSON* youngest = list[0];
    for(int i=1; i<size; i++){
        if (list[i]->birthdate > youngest->birthdate) youngest = list[i];
    }
    return youngest;
}

int main(void){
    PERSON* persons[100];
    int count = loadPersons(persons);
    printf("Oldest: ");
    printPerson(oldestPerson(persons, count));
    printf("Youngest: ");
    printPerson(youngestPerson(persons, count));

    return 0;
}
