#include <iostream>

using namespace std;

int main(void){
    int height, weight;     // 신장(cm), 체중(kg)
    double bmi;             // 비만도 수치

    cin >> height >> weight;
    bmi = weight / (height * 0.01 * height * 0.01);
    if(bmi >25) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}