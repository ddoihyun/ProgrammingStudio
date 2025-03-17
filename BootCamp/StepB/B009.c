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

/*
void makeJumsu(struct st_jumsu* p);
파라미터: 점수 데이터의 포인터(p) 
리턴값: 없음
수행내용: 해당 학생의 점수 데이터 구조체 내의 과목 점수로 총점, 평균, 등급을 넣는다.
*/
void makeJumsu(struct st_jumsu* p){
    p->sum = 0;
    for(int j=0; j<3; j++)
        p->sum += p->jumsu[j];
    p->avg = p->sum / 3.0;
    p->grade = getGrade(p->avg);
}

/*
void printJumsu(struct st_jumsu* p);
파라미터: 점수 데이터의 포인터(p) 
리턴값: 없음
수행내용: 해당 학생의 점수 데이터 구조체 내의 값을 출력한다.
*/

void printJumsu(struct st_jumsu* p){
    printf("%s %d %.1f %c\n", p->name, p->sum, p->avg, p->grade);
}

/*
int getClassSum(struct st_jumsu* data[], int size, int index);
파라미터: 점수 데이터의 포인터 배열(data), 점수 데이터 개수, 과목번호(0~2) 
리턴값: 과목번호에 해당하는 점수의 총 합계
수행내용: 모든 점수 데이터의 특정 과목번호의 점수 합계를 구한다.*/

int getClassSum(struct st_jumsu* data[], int size, int index){
    int sum_class = 0;
    for(int i=0; i<size; i++)
        sum_class += data[i]->jumsu[index];
    return sum_class;
}

int main(void){
    struct st_jumsu* jdata[20]; // 최대 20명의 점수 데이터
    int sum_class[3]; // 과목별 총점
    float average_class[3]; // 과목별 평균
	int all;	// 인원수
    char class_name[3][20] = {"Korean", "English", "Math"};

    scanf("%d", &all);
    for(int i=0; i<all; i++){
        jdata[i] = (struct st_jumsu*)malloc(sizeof(struct st_jumsu));
        scanf("%s %d %d %d", jdata[i]->name, &(jdata[i]->jumsu[0]), &(jdata[i]->jumsu[1]), &(jdata[i]->jumsu[2]));
        makeJumsu(jdata[i]);
    }
    
    for(int i=0; i<all; i++)
        printJumsu(jdata[i]);

    for(int j=0; j<3; j++){
        sum_class[j] = getClassSum(jdata, all, j);
        average_class[j] = sum_class[j] / (float)all;
        printf("%s %d %.1f\n", class_name[j], sum_class[j], average_class[j]);
    }
}