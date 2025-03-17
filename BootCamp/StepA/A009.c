#include <stdio.h>

struct bmi_struct{
    char name[20];  // 이름 (공백 없이 영어 알파벳으로 구성)
    int height, weight; // 키(cm), 몸무게(kg)
    float bmi; // 비만도
    int bmi_level; // 비만등급 0~4
};

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


/*void bmiResolve(struct bmi_struct* sp);
파라미터) sp: 신장과 체중이 입력되어 있는 구조체 변수의 포인터
수행내용) sp 포인터 내의 신장과 체중을 사용하여 비만도와 비만등급을 계산하여 넣는다.
리턴값) 없음 */

void bmiResolve(struct bmi_struct* sp){
    sp->bmi = sp->weight / (sp->height*0.01 * sp->height*0.01);
    sp->bmi_level = bmiLevel(sp->height, sp->weight);
}

int main(void){
    struct bmi_struct data;
    char bmi_string[5][20] = {"Underweight","Normal weight","Overweight","Mild obesity","Severe obesity"};
    scanf("%s %d %d", data.name, &data.height, &data.weight);
    bmiResolve(&data);
    printf("%s, You are %s.\n", data.name, bmi_string[data.bmi_level]);
}