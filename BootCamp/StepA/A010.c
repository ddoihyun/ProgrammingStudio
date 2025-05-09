#include <stdio.h>
#include <stdlib.h>

struct bmi_struct{
    char name[20];  // 이름 (공백 없이 영어 알파벳으로 구성)
    int height, weight; // 키(cm), 몸무게(kg)
    float bmi; // 비만도
    int bmi_level; // 비만등급 0~4
};

// void makeDataFile(){
// 	char str[] = "James 176 80\n\
// Mary 168 54\n\
// David 187 60\n\
// Jane 155 47\n\
// Wayne 170 75\n\
// Elice 173 80\n\
// Julie 165 50\n\
// Eugene 182 73\n\
// Amy 158 48\n\
// Steve 170 66";

// 	FILE* fp = fopen("A10.txt", "w");
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

void bmiResolve(struct bmi_struct* sp){
    sp->bmi = sp->weight / (sp->height*0.01 * sp->height*0.01);
    sp->bmi_level = bmiLevel(sp->height, sp->weight);
}

/*
int loadDataFile(struct bmi_struct* list[]);
// 파라미터 : 채워야 하는 비만도 관리 데이터용 구조체 포인터 배열(list) 
// 리턴값 : 채워진 구조체 데이터 레코드의 갯수
// 수행내용 : 파일(A10.txt)로부터 키와 몸무게의 데이터를 읽어 list 포인터 배열에 각각 
            메모리를 할당하여 키, 몸무게, 비만도, 비만도등급이 저장된 구조체 
            데이터가 연결되도록 한 후, 완성한 데이터 갯수를 리턴
void printBmiData(struct bmi_struct* list[], int size);
// 파라미터 : 채워야 하는 비만도 관리 데이터용 구조체 포인터 배열(list), 데이터 개수(size) 
// 리턴값 : 없음
// 수행내용 : list 포인터 배열에 들어있는 각 구조체의 데이터를 출력 형식에 맞추어 화면에 출력함*/

// int loadDataFile(struct bmi_struct* list[]){
//     FILE* file = fopen("A10.txt", "r");
//     int i=0;
//     while(!feof(file)){
//         list[i] = (struct bmi_struct *) malloc(sizeof(struct bmi_struct));
//     }
//     fclose(file);
//     return i;
// }

int loadData(struct bmi_struct* list[]){
    int count;
    int height, weight;
    scanf("%d", &count);
    for(int i=0; i<count; i++){
        list[i] = (struct bmi_struct *) malloc(sizeof(struct bmi_struct));
        scanf("%s %d %d", list[i]->name, &(list[i]->height), &(list[i]->weight));
    }
    return count;
}

void printBmiData(struct bmi_struct* list[], int size){
    /*
    목록의 갯수(size)만큼 반복하여 list[i] 출력
    ex - James 176cm 80kg 25.8 Mild obesity
    => list[i]->name ... bmi_string[list[i]->bmilevel]
    */
    char bmi_string[5][20] = {"Underweight","Normal weight","Overweight","Mild obesity","Severe obesity"};
    for(int i=0; i<size; i++)
        printf("%s %dcm %dkg %.1f %s\n", list[i]->name, list[i]->height, list[i]->weight, list[i]->bmi, bmi_string[list[i]->bmi_level]);
   
}

int main(void) {
	struct bmi_struct* data[20];    // 최대 20명까지 관리
	int count;
	// makeDataFile();     // 데이터파일 제작 (미리 제공된 코드 수정 금지)
	// count = loadDataFile(data);     // 데이터파일로부터 이름, 신장, 체중 데이터 입력받기
    count = loadData(data);     // 여러 명의 이름, 신장, 체중 데이터 입력받기
	printf("Loaded %d\n", count);
	for(int i=0; i<count; i++)
		bmiResolve(data[i]);        // 비만도 관리 데이터 완성하기
	printBmiData(data, count);      // 비만도 관리 데이터 출력하기
	return 0;
}