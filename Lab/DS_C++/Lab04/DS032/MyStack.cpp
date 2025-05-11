#include "MyStack.h"
#include <iostream>
using namespace std;

MyStack::MyStack(int size) {
    maxsize = size;
    top = -1;
    list = new string[maxsize];
}

MyStack::~MyStack() {
    delete[] list;
}

bool MyStack::isEmpty() {
    return top == -1;
}

bool MyStack::isFull() {
    return top == maxsize - 1;
}

void MyStack::push(string element) {
    if (!isFull()) {
        list[++top] = element;
    }
}

void MyStack::clear() {
    top = -1;
}

string* MyStack::pop() {
    if (isEmpty()) return nullptr;
    return &list[top--];
}

void MyStack::print() {
    for (int i = top; i >= 0; i--) {
        cout << list[i] << endl;
    }
}
