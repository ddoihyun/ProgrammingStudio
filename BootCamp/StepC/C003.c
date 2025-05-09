#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_person{
	char name[20]; 	// Name (single word, no duplicates)
	int gender;  	// 0 - Female, 1 - Male
	int country; // Country code (index of COUNTRY_NAME 0~5)
	int birthyear; 	// Birthyear
};

int getCountry(char* str){
    int country = 5;
    char country_name[6][5] = {"KR", "US", "JP", "CN", "FR", "--"};
    for(int i=0; i<5; i++)
        if(strcmp(str, country_name[i]) == 0){
            country = i;
            break;}
    return country;
}

void printInfo(struct st_person* p){
    char gender[2][10] = {"Female", "Male"};
    int age = 2025 - p->birthyear;
    char country[6][5] = {"KR", "US", "JP", "CN", "FR", "--"};
    printf("%s (%s, age:%d, from %s)\n", p->name, gender[p->gender], age, country[p->country]);
}

int main(void){
    struct st_person* pdata[20];
    char country[5];
    int count;  
    int gender_count[6][2] = {0}; // 국적별 성별 인원수
    int total_age[6] = {0}; // 국적별 총 나이
    int person_count[6] = {0}; // 국적별 전체 인원수
    char country_name[6][5] = {"KR", "US", "JP", "CN", "FR", "--"};

    scanf("%d", &count);
    for(int i=0; i<count; i++){
        pdata[i] = (struct st_person *)malloc(sizeof(struct st_person));
        scanf("%s %d %s %d", pdata[i]->name, &pdata[i]->gender, country, &pdata[i]->birthyear);
        pdata[i]->country = getCountry(country);
        
        gender_count[pdata[i]->country][pdata[i]->gender]++;
        total_age[pdata[i]->country] += (2025 - pdata[i]->birthyear);
        person_count[pdata[i]->country]++;
    }

    for(int i=0; i<count; i++){
        printf("%d) ", i+1);
        printInfo(pdata[i]);
    }

    for(int i=0; i<6; i++){
        if(person_count[i] > 0){
            double avg_age = (double)total_age[i] / person_count[i];
            printf("[%s] Female:%d Male:%d average age:%.1f\n", country_name[i], gender_count[i][0], gender_count[i][1], (int)(avg_age * 10 + 0.5) / 10.0);
        }
    }
    
    return 0;
}