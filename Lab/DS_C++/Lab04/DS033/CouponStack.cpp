#include "CouponStack.h"
#include <iostream>
using namespace std;

CouponStack::CouponStack(int size) {
    maxsize = size;
    top = -1;
    list = new Coupon[maxsize];
}

CouponStack::~CouponStack() {
    delete[] list;
}

void CouponStack::initialize() {
    top = -1;
}

bool CouponStack::isEmpty() const {    
    return top == -1;
}

bool CouponStack::isFull() const {     
    return top == maxsize - 1;
}

void CouponStack::push(const Coupon& elem) {   
    if (isFull()) {
        cout << "Stack is full." << endl;
    } else {
        list[++top] = elem;
    }
}

Coupon* CouponStack::pop() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return nullptr;
    } else {
        return &list[top--]; 
    }
}

void CouponStack::print() {
    for (int i = top; i >= 0; i--) {
        cout << list[i].rank << "등 - " << list[i].item << endl;
    }
}

void CouponStack::rprint() {
    while (!isEmpty()) {
        cout << list[top].rank << "등 - " << list[top].item << endl;
        top--;
    }
}