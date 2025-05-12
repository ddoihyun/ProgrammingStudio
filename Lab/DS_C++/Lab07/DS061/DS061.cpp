#include <iostream>
#include "MyLLQueue.h"
using namespace std;

int main(){
    int choice, flag=1, value;
    MyLLQueue q;
    while(flag == 1) {
        cout << endl << "1.enqueue 2.dequeue 3.showfront 4.showrear 5.displayQueue 6.exit > ";
        cin >> choice;
    switch (choice){
        case 1: cout << "Enter a Value: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2: q.dequeue();
            break;
        case 3: q.showFront();
            break;
        case 4: q.showRear();
            break;
        case 5: q.displayQueue();
            break;
        case 6: flag = 0;
            cout << "bye!" << endl;
            break;
        default: 
            cout << "Invalid command" << endl;
            break;
        }
    }
    return 0;
}