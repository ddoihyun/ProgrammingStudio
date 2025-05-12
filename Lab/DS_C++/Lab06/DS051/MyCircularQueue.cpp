#include "MyCircularQueue.h"
#include <iostream>
#include <iomanip>
using namespace std;

MyCircularQueue::MyCircularQueue(int size) { 
    maxsize = size;
    Q = new int[maxsize];
    initialize();
}

MyCircularQueue::~MyCircularQueue() {
    delete[] Q;
}

void MyCircularQueue::initialize() {
    front = 0;
    rear = 0;
}

void MyCircularQueue::enqueue(const int& x) {
    if (isFull()) {
        cout << "=> Queue is full !" << endl;
        return;
    }
    Q[rear] = x;
    rear = (rear + 1) % maxsize;
}

int MyCircularQueue::dequeue() { 
    if (isEmpty()) {
        cout << "=> Queue is empty !" << endl;
        return -1;
    }
    int x = Q[front];
    front = (front + 1) % maxsize;
    return x;
}

bool MyCircularQueue::isFull() const { 
    return (rear + 1) % maxsize == front;
}

bool MyCircularQueue::isEmpty() const {
    return front == rear;
}

int MyCircularQueue::Front() const {
    if (!isEmpty()) return Q[front];
    return -1;
}

int MyCircularQueue::Rear() const {
    if (!isEmpty()) return Q[(rear - 1 + maxsize) % maxsize];
    return -1;
}

int MyCircularQueue::size() const {
    return (rear - front + maxsize) % maxsize;
}

void MyCircularQueue::print() const {
    for (int i = 0; i < size(); i++) {
        int idx = (front + i) % maxsize;
        cout << "[" << Q[idx] << "]";
    }
    cout << endl;
}

void MyCircularQueue::printDetail() const {
    cout << "Size : " << size() << endl;

    // Queue 내용 출력
    cout << "Queue :";
    for (int i = 0; i < size(); i++) {
        int idx = (front + i) % maxsize;
        cout << "[" << Q[idx] << "]";
    }
    cout << endl;

    // index 출력 (여기서 +1 필요)
    cout << "index :";
    for (int i = 0; i < size(); i++) {
        int idx = (front + i) % maxsize;
        cout << setw(4) << (idx + 1);  // <- 여기서 +1
    }
    cout << endl;

    cout << "front : " << front << ", rear : " << rear << endl;
}