# C. 당신은 몇 살입니까? (구조체 버전)
이름과 8자리의 생년월일을 숫자로 입력받은 후 나이를 계산하여 생년월일과 함께 출력하라.

```
나이 = 2025 - 태어난 년도
```

다음 코드를 사용하되, 함수 2개를 직접 구현하라.
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

void setPerson(PERSON *p); // 구조체 포인터 p 내의 멤버변수 값을 계산해서 넣는 함수
void printPerson(PERSON *p); // 구조체 포인터 p 내용을 출력하는 함수
```

```
입력: 문자열(이름) 1개, 정수(8자리 생년월일 YYYYMMDD) 1개
출력: 이름, 나이, 생년월일(출력 예 참고)
```
input
```
Smith 19920514
```
output
```
Smith - 33 (May 14, 1992)
```