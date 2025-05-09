#define MAX_SIZE 100
#include <iostream>
using namespace std;

int SumofNum(int num[], int size){
    int total = 0;
    for(int i=0; i<size; i++)
        total += num[i];
    return total;
}

int MaxofNum(int num[], int size){
    int max_index = 0;
    for(int i=1; i<size; i++){
        if(num[max_index] < num[i]) max_index = i;
    }
    return num[max_index];
}

int main(void){
    int size;
    int num[MAX_SIZE];

    cin >> size ;

    for(int i=0; i<size; i++){
        cin >> num[i];
    }

    cout << SumofNum(num, size) << " " << MaxofNum(num, size) << endl;

    return 0;
}