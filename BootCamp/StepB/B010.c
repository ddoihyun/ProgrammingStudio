#include <stdio.h>
#include <stdlib.h>

struct st_jumsu{
  char name[20]; // 이름 (공백 없이 영어 알파벳으로 구성)
  int jumsu[3]; // 3과목 점수 (국, 영, 수)
  int sum;	// 총점
  float avg;	// 평균
  char grade;	// 평균에 대한 등급
};

char getGrade(float score){
    char grade;
    if(score >= 90) grade = 'A';
    else if(score >= 80) grade = 'B';
    else if(score >= 70) grade = 'C';
    else if(score >= 60) grade = 'D';
    else grade = 'F';
    return grade;
}

void makeJumsu(struct st_jumsu* p){
    p->sum = 0;
    for(int j=0; j<3; j++)
        p->sum += p->jumsu[j];
    p->avg = p->sum / 3.0;
    p->grade = getGrade(p->avg);
}

void printJumsu(struct st_jumsu* p){
    printf("%s - %d %.1f %c\n", p->name, p->sum, p->avg, p->grade);
}

/*
struct st_jumsu* firstRanking(struct st_jumsu* data[], int size, int index);
파라미터: 점수 데이터의 포인터 배열(data), 점수 데이터 개수, 과목번호(0~2) 
리턴값: 과목번호에 해당하는 모든 점수 중 가장 높은 점수를 가진 점수 데이터 포인터
수행내용: 모든 점수 데이터의 특정 과목번호의 점수 중에 가장 높은 점수를 가진 데이터를 찾아 그 데이터의 구조체 포인터를 리턴한다.
*/

struct st_jumsu* firstRanking(struct st_jumsu* data[], int size, int index){
    int total=0, rank;
    for(int i=0; i<size; i++){
        if(total < data[i]->jumsu[index]){
            total = data[i]->jumsu[index];
            rank = i;}
    }
    return data[rank];
}

/*
int countGrade(struct st_jumsu* data[], int size, char grade);
파라미터: 점수 데이터의 포인터 배열(data), 점수 데이터 개수, 등급문자(A,B,C,D,F) 
리턴값: 모든 점수 데이터 중 특정 등급을 가진 점수 데이터의 개수
수행내용: 모든 점수 데이터 중 특정 등급을 가진 점수 데이터의 개수를 계산하여 리턴한다.
*/
int countGrade(struct st_jumsu* data[], int size, char grade){
    int count = 0;
    for(int i=0; i<size; i++)
        if(data[i]->grade == grade) count++;
    return count;
}

int main(){
	struct st_jumsu* jdata[20]; // 최대 20명의 점수 데이터
	int sum_class[3]; // 과목별 총점
	float average_class[3]; // 과목별 평균
	char class_name[3][20] = {"Korean", "English", "Math"};
	struct st_jumsu* first[3];
	char grades[5] = "ABCDF";
	int count_grade[5];
	int all; // 인원수

    scanf("%d", &all);
    for(int i=0; i<all; i++){
        jdata[i] = (struct st_jumsu*)malloc(sizeof(struct st_jumsu));
        scanf("%s %d %d %d", jdata[i]->name, &(jdata[i]->jumsu[0]), &(jdata[i]->jumsu[1]), &(jdata[i]->jumsu[2]));
        makeJumsu(jdata[i]);
    }

    for(int i=0; i<all; i++){
        printf("%d) ", i+1);
        printJumsu(jdata[i]);
    }

    for(int j=0; j<3; j++){
        struct st_jumsu*  one = firstRanking(jdata, all, j);
        printf("[%s] %s %d\n", class_name[j], one->name, one->jumsu[j]);
    }

    for(int k=0; k<sizeof(grades); k++){
        int count = countGrade(jdata, all, grades[k]);
        printf("[%c] %d\n", grades[k], count);
    }

	return 0;
}