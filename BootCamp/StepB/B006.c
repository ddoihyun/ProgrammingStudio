    
#include <stdio.h>
/*
int studentSum(int s[5][3], int number);
파라미터 : 점수배열(s)과 학생번호(0,1,2,3,4) 
리턴값 : 해당 학생의 총점

char getGrade(float score);
파라미터 : 평균 점수(score) 
리턴값 : 해당 평균 점수의 등급 ('A','B','C','D','F')

int classSum(int s[5][3], int number);
파라미터 : 점수배열(s)과 과목번호(0,1,2) 
리턴값 : 해당 과목의 총점*/

int studentSum(int s[5][3], int number){
    int total_student = 0;
    for(int j=0; j<3; j++)
        total_student += s[number][j];
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

int classSum(int s[5][3], int number){
    int total_class = 0;
    for(int i=0; i<5; i++)
        total_class += s[i][number];
    return total_class;
}


int main(void){
    int jumsu[5][3]; // 5명의 3과목 점수를 저장하고 있는 2차원 배열 
    int sum_student[5]={}; // 학생별 총점
    float average_student[5];  // 학생별 평균
    char grade[5]; // 학생별 등급 

    int sum_class[3]={}; // 과목별 총점
    float average_class[3]; // 과목별 평균
    char class_name[3][20] = {"Korean", "English", "Math"};

    for(int i=0; i<5; i++)
        for(int j=0; j<3; j++)
            scanf("%d", &jumsu[i][j]);

    for(int i=0; i<5; i++){
        sum_student[i] = studentSum(jumsu, i);
        average_student[i] = sum_student[i] / 3.0;
        grade[i] = getGrade(average_student[i]);
        printf("%d) %d %.1f %c\n", i+1, sum_student[i], average_student[i], grade[i]);
    }

    for(int j=0; j<3; j++){
        sum_class[j] = classSum(jumsu, j);
        average_class[j] = sum_class[j] / 5.0;
        printf("%s %d %.1f\n", class_name[j], sum_class[j], average_class[j]);
    }
}