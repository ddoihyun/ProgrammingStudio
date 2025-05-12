#include "MyCircularStringQueue.h"
#include <iostream>
#include <cmath>

using namespace std;

MyCircularStringQueue::MyCircularStringQueue(int size) {
    maxsize = size;
    front = 0;
    rear = 0;
    Q = new string[maxsize];
}

MyCircularStringQueue::~MyCircularStringQueue() {
    delete[] Q;
}

void MyCircularStringQueue::initialize() {
    front = rear = 0;
}

bool MyCircularStringQueue::isFull() const {
    return (rear + 1) % maxsize == front;
}

bool MyCircularStringQueue::isEmpty() const {
    return front == rear;
}

int MyCircularStringQueue::size() const {
    return (rear - front + maxsize) % maxsize;
}

void MyCircularStringQueue::enqueue(const string& x) {
    if (isFull()) {
        cout << "=> Queue is full !\n";
        return;
    }
    Q[rear] = x;
    rear = (rear + 1) % maxsize;
}

string MyCircularStringQueue::dequeue() {
    if (isEmpty()) {
        cout << "=> Queue is empty !\n";
        return "";
    }
    string x = Q[front];
    front = (front + 1) % maxsize;
    return x;
}
