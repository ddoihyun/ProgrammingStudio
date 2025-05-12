#include <iostream>
#include "MyLLQueue.h"
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1 || n > 20) {
        cout << "1 이상 20 이하의 정수를 입력하세요." << endl;
        return 1;
    }

    MyLLQueue q;

    q.enqueue(1);
    if (n >= 2) q.enqueue(1);

    if (n == 1) {
        cout << "1st : 1" << endl;
        cout << "=> fibonacci(1) : 1" << endl;
        return 0;
    } 
    else if (n == 2) {
        cout << "1st : 1" << endl;
        cout << "2nd : 1" << endl;
        cout << "=> fibonacci(2) : 1" << endl;
        return 0;
    }

    cout << "1st : 1" << endl;
    cout << "2nd : 1" << endl;

    int index = 3;
    while (index <= n) {
        int first, second;

        Node* ptr = q.getFront();
        first = ptr->data;
        second = ptr->link->data;

        int next = first + second;
        q.enqueue(next);    
        q.dequeue();        

        cout << index << "th : " << next << endl;
        index++;
    }

    Node* rearPtr = q.getRear();
    cout << "=> fibonacci(" << n << ") : " << rearPtr->data << endl;

    return 0;
}