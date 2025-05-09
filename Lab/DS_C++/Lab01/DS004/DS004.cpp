#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
    int kor, eng, math;         // 국어, 영어, 수학 점수
    int total;                  // 총점
    double average;             // 평균 

    cin >> kor >> eng >> math;  
    total = kor + eng + math;   
    average = total / 3.0;      

    printf("%d %.1f\n", total, average);  // 총점과 평균 출력
    if(kor >= 70) printf("Korean - Pass\n");
    else printf("Korean - Fail\n");
    if(eng >= 70) printf("English - Pass\n");
    else printf("English - Fail\n");
    if(math >= 70) printf("Math - Pass\n");
    else printf("Math - Fail\n");

    return 0;
}