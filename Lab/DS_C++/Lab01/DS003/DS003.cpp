#include <iostream>
using namespace std;

int main(void){
    int month, day;     // 월, 일
    int day_count = 0;      // 1년 중 날 수

    cin >> month >> day;
    for(int i=1; i<month; i++){
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12) day_count += 31;
        else if(i==2) day_count += 28;
        else day_count += 30;
    }
    day_count += day;

    cout << day_count << endl;

    return 0;
}