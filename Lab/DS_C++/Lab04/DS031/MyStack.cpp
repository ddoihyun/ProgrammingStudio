#include "MyStack.h"
#include <iostream>
using namespace std;

MyStack::MyStack(int size) {
    maxsize = size;
    top = -1;
    list = new int[maxsize];
}

MyStack::~MyStack() {
    delete[] list;
}

void MyStack::initialize() {
    top = -1;
}

bool MyStack::isEmpty() const {   
    return top == -1;
}

bool MyStack::isFull() const {    
    return top == maxsize - 1;
}

void MyStack::push(const int& element) {   
    if (isFull()) {
        cout << "Stack is full." << endl;
    } else {
        list[++top] = element;
    }
}

int* MyStack::pop() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return nullptr;
    } else {
        return &list[top--];
    }
}

void MyStack::print() {
    for (int i = top; i >= 0; i--) {
        cout << list[i] << endl;
    }
}