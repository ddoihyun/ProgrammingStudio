#include <stdio.h>

// void makeDataFile(){
// 	char str[] = "165 56\n\
// 176 90\n\
// 187 60\n\
// 155 47\n\
// 170 75\n\
// 173 80\n\
// 165 50\n\
// 182 73\n\
// 158 48\n\
// 170 66";
// 	FILE* fp = fopen("A08.txt", "w");
// 	fprintf(fp, "%s", str);
// 	fclose(fp);
// }

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

// int main(void){
// 	int height[10], weight[10]; // 10명의 신장(cm), 체중(kg)
// 	int bmi_level[10]; // 10명의 비만등급(0~4)
// 	int count, all; // 비만인 사람의 숫자, 총 인원수
// 	int i=0;
//     int level;
//     makeDataFile();

//     FILE* file = fopen("A07.txt", "r");
//     while(!feof(file)){ // 파일 끝까지 반복
//         fscanf(file, "%d %d", &height[i], &weight[i]);
//         i++;
//     }

//     fclose(file);

//     all=i;
//     for(int i=0; i<all; i++){
//         level = bmiLevel(height[i], weight[i]);
//         if(level > 2){
//             printf("%d ", i+1);
//             count++;
//         }
//     }

//     printf("\n%d\n", all);
// }

int main(){
	int height[10], weight[10]; // 10명의 신장(cm), 체중(kg)
	int bmi_level[10]; // 10명의 비만등급(0~4)
	int count; // 비만인 사람의 숫자
	int all;	// 총 인원
	char bmi_string[5][20] = {"Underweight","Normal weight","Overweight","Mild obesity","Severe obesity"};

	scanf("%d", &all);
    for(int i=0; i<all; i++)
        scanf("%d %d", &height[i], &weight[i]);
    
    for(int i=0; i<all; i++){
        bmi_level[i] = bmiLevel(height[i], weight[i]);
        if(bmi_level[i] > 2) printf("%d %s\n", i+1, bmi_string[bmi_level[i]]);
    }


	return 0;
}