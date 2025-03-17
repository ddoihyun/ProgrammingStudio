#include <stdio.h>
/*int bmiLevel(int height, int weight);
파라미터) height: 신장(cm), weight: 체중(kg)
수행내용) 비만도 계산 후 비만등급을 판정한다.
리턴값) 비만등급 (0~4): 저체중 0, 정상체중 1, 과체중 2, 경도비만 3, 고도비만 4
    bmi < 18.5: 0 (Underweight)
    18.5 <= bmi < 23: 1 (Normal weight)
    23 <= bmi < 25: 2 (Overweight)
    25 <= bmi < 30: 3 (Mild obesity)
    30 <= bmi: 4 (Severe obesity)*/

int bmiLevel(int height, int weight){
    int bmi_level;
    float bmi = weight / (height*0.01 * height*0.01);

    if(bmi < 18.5) bmi_level = 0;
    else if(bmi < 23) bmi_level = 1;
    else if(bmi <25) bmi_level = 2;
    else if(bmi < 30) bmi_level = 3;
    else bmi_level = 4;

    return bmi_level;
}

int main(void){
    char bmi_string[5][20] = {"Underweight","Normal weight","Overweight","Mild obesity","Severe obesity"};
    int height, weight; // 신장(cm), 체중(kg) 
    scanf("%d %d", &height, &weight);
    int bmi_level = bmiLevel(height, weight);
    printf("%s (%d)\n", bmi_string[bmi_level], bmi_level);
}