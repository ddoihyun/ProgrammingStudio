#include <stdio.h>

int main(void){
    int kor, eng, math; // 국어점수, 영어점수, 수학점수
    int total; // 총점
    float average;  // 평균점수
    char grade; // 등급

    /*
    평균 90이상 : A
    평균 80이상 ~ 90미만 : B
    평균 70이상 ~ 80미만 : C
    평균 60이상 ~ 70미만 : D
    평균 60미만 : F*/

    scanf("%d %d %d", &kor, &eng, &math);
    total = kor + eng + math;
    average = total / 3.0;
    if(average >= 90) grade = 'A';
    else if(average >= 80) grade = 'B';
    else if(average >= 70) grade = 'C';
    else if(average >= 60) grade = 'D';
    else grade = 'F';
    printf("%.1f %c\n", average, grade);

}