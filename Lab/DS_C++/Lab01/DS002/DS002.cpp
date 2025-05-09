#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x1, x2;      // 첫 번째 좌표 값
    double y1, y2;      // 두 번째 좌표 값

    cin >> x1 >> y1 >> x2 >> y2;
    double distance = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
    // cout << distance << endl;
    printf("%.1f\n", distance);
    
    return 0;
}