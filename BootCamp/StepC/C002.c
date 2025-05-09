#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_person{
	char name[20]; 	// Name (single word, no duplicates)
	int gender;  	// 0 - Female, 1 - Male
	int country;	// Country code (index of COUNTRY_NAME 0~5)
	int birthyear; 	// Birthyear
};

int getCountry(char* str){
    int country = 5;
    char country_name[6][5] = {"KR", "US", "JP", "CN", "FR", "--"};
    for(int i=0; i<sizeof(country_name)-1; i++)
        if(strcmp(str, country_name[i]) == 0){
            country = i;
            break;}
    return country;
}

void printInfo(struct st_person* p){
    // James (Male, age:25, from KR)
    char gender[2][10] = {"FeMale", "Male"};
    int age = 2025 - p->birthyear;
    char country[6][5] = {"KR", "US", "JP", "CN", "FR", "--"};
    printf("%s (%s, age:%d, from %s)\n", p->name, gender[p->gender], age, country[p->country]);
}

/*
int countGender(struct st_person* data[], int size, int gender);
파라미터: 학생정보 데이터 포인터 배열(data), 데이터 개수, 성별 인덱스(0~1) 
리턴값: 해당 성별 인원수
수행내용: 모든 학생 정보 데이터에서 특정 성별인 인원수를 구한다.
*/

int countGender(struct st_person* data[], int size, int gender){
    int count = 0;
    for(int i=0; i<size; i++){
        if(data[i]->gender == gender) count++;
    }
    return count;
}

int main(void){
    struct st_person* pdata[20]; // 최대 20명의 데이터
    char country[5]; // 국적입력을 위한 문자열
    char count_gender[2]; // 성별 인원수
    int count;  // 인원수

    scanf("%d", &count);
    for(int i=0; i<count; i++){
        pdata[i] = (struct st_person *)malloc(sizeof(struct st_person));
        scanf("%s %d %s %d", pdata[i]->name, &pdata[i]->gender, country, &pdata[i]->birthyear);
        pdata[i]->country = getCountry(country);
    }

    for(int i=0; i<count; i++){
        printf("%d) ", i+1);
        printInfo(pdata[i]);
    }

    char gender[2][10] = {"FeMale", "Male"};
    for(int i=0; i<2; i++)
        printf("%s:%d ", gender[i], countGender(pdata, count, i));
    printf("\n");
}