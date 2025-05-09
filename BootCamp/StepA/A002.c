#include <stdio.h>

int main(void){
    int height, weight; // 신장(cm), 체중(kg) 
    float bmi; // 비만도 수치 

    scanf("%d %d", &height, &weight);
    bmi = weight / (height*0.01 * height*0.01);

    if(bmi >= 25) printf("%.1f Overweight\n", bmi);
    else printf("%.1f Normal\n", bmi);
}