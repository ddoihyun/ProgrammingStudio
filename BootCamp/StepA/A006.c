#include <stdio.h>

int bmiLevel(int height, int weight){
    int bmi_level;
    float bmi = weight / (height*0.01 * height*0.01);

    if(bmi < 18.5) bmi_level = 0; // Underweight
    else if(bmi < 23) bmi_level = 1; // Normal weight
    else if(bmi <25) bmi_level = 2; // Overweight
    else if(bmi < 30) bmi_level = 3; // Mild obesity
    else bmi_level = 4; // Severe obesity

    return bmi_level;
}

int main(void){
    int height[10], weight[10]; // 10명의 신장(cm), 체중(kg)
    float bmi[10]; // 10명의 비만도 수치
    int count=0; // 비만인 사람의 숫자

    for(int i=0; i<10; i++)
        scanf("%d %d", &height[i], &weight[i]);

    for(int i=0; i<10; i++){
        bmi[i] = bmiLevel(height[i], weight[i]);
        if(bmi[i] > 2){
            count++;
            printf("%d ", i+1);
        }
    }

    printf("\n%d\n", count);
}