#include <stdio.h>

int main(void){
    char name[20];
    int score[3] = {0, };
    int sum = 0;
    char title[][20] = {"국어", "수학", "영어"};
    
    printf("학생 이름 입력: ");
    scanf("%s", name);
    for(int i=0; i<3; i++){
        printf("%s 학생의 %s 점수 입력: ", name, title[i]);
        scanf("%d", &score[i]);
        sum += score[i];
    }
    
    float avg = sum / 3.0;
    printf("%s 학생의 점수 합계는 %d이고, 평균은 %.1f입니다.\n", name, sum, avg);
    return 0;
}