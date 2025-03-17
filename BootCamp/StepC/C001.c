#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_person{
	char name[20]; 	// Name (single word, no duplicates)
	int gender;  	// 0 - Female, 1 - Male
	int country;	// Country code (index of COUNTRY_NAME 0~5)
	int birthyear; 	// Birthyear
};

/*
int getCountry(char* str);
파라미터: 국적을 나타내는 문자열(str) 
리턴값: 국적에 해당되는 인덱스 (0~5)
수행내용: 국적 문자열에 해당하는 인덱스를 찾는다.
*/
int getCountry(char* str){
    int country = 5;
    // if(str == "KR") country = 0;
    // else if(str == "US") country = 1;
    // else if(str == "JP") country = 2;
    // else if(str == "CN") country = 3;
    // else if(str == "FR") country = 4;
    // else country = 5;
    char country_name[6][5] = {"KR", "US", "JP", "CN", "FR", "--"};
    for(int i=0; i<sizeof(country_name)-1; i++)
        if(strcmp(str, country_name[i]) == 0){
            country = i;
            break;}
    return country;
}

/*
void printInfo(struct st_person* p);
파라미터: 학생정보 구조체 포인터(p) 
리턴값: 없음
수행내용: 해당 학생 정보의 내용을 출력한다.*/
void printInfo(struct st_person* p){
    // James (Male, age:25, from KR)
    char gender[2][10] = {"FeMale", "Male"};
    int age = 2025 - p->birthyear;
    char country[6][5] = {"KR", "US", "JP", "CN", "FR", "--"};
    printf("%s (%s, age:%d, from %s)\n", p->name, gender[p->gender], age, country[p->country]);
}

int main(void){
    struct st_person* one; // 학생 1명의 데이터
    char country[5]; // 국적입력을 위한 문자열
    one = (struct st_person*)malloc(sizeof(struct st_person));

    // James 1 KR 2000
    scanf("%s %d %s %d", one->name, &one->gender, country, &one->birthyear);
    one->country = getCountry(country);

    printInfo(one);
}