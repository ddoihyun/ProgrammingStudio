#include <iostream>
#include "MyCircularQueue.h"
using namespace std;

int main() {
    MyCircularQueue q(10);

    cout << "===== Dequeue x 1 =====" << endl;
    q.dequeue();
    q.printDetail();
    cout << endl;

    cout << "===== Enqueue x 7 (10 ~ 70) =====" << endl;
    for (int i = 1; i <= 7; i++)
        q.enqueue(i * 10);
    q.printDetail();
    cout << endl;

    cout << "===== Dequeue x 3 =====" << endl;
    for (int i = 0; i < 3; i++)
        q.dequeue();
    q.printDetail();
    cout << endl;

    cout << "===== Enqueue x 6 (10 ~ 60) =====" << endl;
    for (int i = 1; i <= 6; i++)
        q.enqueue(i * 10);
    q.printDetail();

    return 0;
}