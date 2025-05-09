#include <stdio.h>

int studentSum(int s[20][3], int size, int index){
    int total_student = 0;
    for(int j=0; j<3; j++)
        total_student += s[index][j];
    return total_student;
}

char getGrade(float score){
    char grade;
    if(score >= 90) grade = 'A';
    else if(score >= 80) grade = 'B';
    else if(score >= 70) grade = 'C';
    else if(score >= 60) grade = 'D';
    else grade = 'F';
    return grade;
}

int classSum(int s[20][3], int size, int number){
    int total_class = 0;
    for(int i=0; i<size; i++)
        total_class += s[i][number];
    return total_class;
}

/*
int firstRanking(int s[20], int size);
파라미터 : 점수배열(s)과 인원수(size) 
리턴값 : 가장 높은 점수를 가진 배열 인덱스*/

int firstRanking(int s[20], int size){
    int total = s[0];
    int rank = 0;
    for(int i=1; i<size; i++)
        if(s[i] > total){
            total = s[i];
            rank = i;}
    return rank+1;
}

int main(void){
    int jumsu[20][3]; // 최대 20명의 3과목 점수를 저장하고 있는 2차원 배열 
	int sum_student[20]; // 최대 20명의 학생별 총점
	float average_student[20];  // 최대 20명의 학생별 평균
	char grade[20]; // 최대 20명의 학생별 등급 
	int first;	// 1등 학생 번호
	int all;	// 인원수
	int sum_class[3]; // 과목별 총점
	float average_class[3]; // 과목별 평균
	char class_name[3][20] = {"Korean", "English", "Math"};

    scanf("%d", &all);

    for(int i=0; i<all; i++)
        for(int j=0; j<3; j++)
            scanf("%d", &jumsu[i][j]);

    for(int i=0; i<all; i++){
        sum_student[i] = studentSum(jumsu, all, i);
        average_student[i] = sum_student[i] / 3.0;
        grade[i] = getGrade(average_student[i]);
        printf("%d) %d %.1f %c\n", i+1, sum_student[i], average_student[i], grade[i]);
    }

    for(int j=0; j<3; j++){
        sum_class[j] = classSum(jumsu, all, j);
        average_class[j] = sum_class[j] / (float)all;
        printf("%s %d %.1f\n", class_name[j], sum_class[j], average_class[j]);
    }

    first = firstRanking(sum_student, all);

    printf("1st Ranking: %d\n", first);
}