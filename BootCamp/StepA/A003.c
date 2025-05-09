#include <stdio.h>

int main(void){
    int person; // 입력 받을 인원 수
    int height, weight; // 신장(cm), 체중(kg) 
    float bmi; // 비만도 수치 
    int count=0; // 비만인 사람의 인원 수

    scanf("%d", &person);
    for(int i=0; i<person; i++){
        scanf("%d %d", &height, &weight);
        bmi = weight / (height*0.01 * height*0.01);
        if(bmi >= 25)count ++;
    }

    printf("%d\n", count);
}