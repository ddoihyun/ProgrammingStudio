# D. 가장 나이가 많은 사람과 가장 나이가 적은 사람은 누구인가요? (구조체 버전)
여러 명(최대 100명)의 이름과 8자리의 생년월일을 숫자로 입력받은 후, 1월부터 12월까지 월 별로 생일인 사람의 이름과 나이를 생년월일, 인원 수를 출력하라.

단, 나이가 같은 경우에는 생일이 빠른 사람이 나이가 많다고 판정하라.

```
나이 = 2025 - 태어난 년도
```

변수는 다음 내용을 참고하여 필요한 변수는 만들어 사용하라.
```
#include <stdio.h>
#include <stdlib.h>

typedef struct st_person{
    char name[20];  // 이름 (빈칸 없는 영어문자열)
    int birthdate;  // 생년월일 (8자리 숫자)
    int age;    // 나이
    int year, month, day;  // 생년, 월, 일
} PERSON;

const char *monthnames[12]  = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

void setPerson(PERSON* p)       // 구조체 포인터 p 내의 멤버변수 값을 계산해서 넣는 함수
int loadPersons(PERSON* list[]) // list의 모든 인원 이름과 생년월일을 입력받는 함수 (총 개수 리턴)
void printBirthdays(PERSON* list[], int size, int month);   // 특정 월이 생일인 사람 출력하는 함수

int main(void){
    PERSON* persons[100];
    int count = loadPersons(persons);
    for(int month=1; month<=12; month++){
        printBirthday(persons, count, month);
    }

    return 0;
}
```

```
입력: 첫줄에 입력할 인원 수, 둘째 줄부터 문자열(이름) 1개, 정수(8자리 생년월일 YYYYMMDD) 1개씩
출력: 12줄에 걸쳐 각 월마다 생일인 사람들의 이름, 나이, 생년월일(출력 예 참고)
```
input
```
10
Smith 19920514
Johnson 19851023
Brown 19991230
Davis 20020507
Martinez 19851119
Anderson 19940702
Taylor 20000315
Thomas 19970625
Wilson 19850910
Moore 20021108
```
output
```
[Jan] - 0
[Feb] - 0
[Mar] Taylor(15) - 1
[Apr] - 0
[May] Smith(14) Davis(7) - 2
[Jun] Thomas(25) - 1
[Jul] Anderson(2) - 1
[Aug] - 0
[Sep] Wilson(10) - 1
[Oct] Johnson(23) - 1
[Nov] Martinez(19) Moore(8) - 2
[Dec] Brown(30) - 1
```