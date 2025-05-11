#include "MyLinkedStack.h"
#include <iostream>
#define MAXSIZE 100
using namespace std;

MyStackList::MyStackList() { 
    top = nullptr; 
    size = 0;
}

MyStackList::~MyStackList() {
    Node* p = top;
    while (p) {
        Node* next = p->next;
        delete p;
        p = next;
    }
}

void MyStackList::initialize(){
    Node* cur = top;
    while (cur) {
        Node* next = cur->next;
        delete cur;
        cur = next;
    }
    top = nullptr;
    size = 0;
}

bool MyStackList::isEmpty() const{
    return top == nullptr;
}

void MyStackList::push(const int& x) {
    Node* p = new Node(x);
    if (p == nullptr) {
        cout << "Stack Overflow!" << endl;
    }
    else {
        p->data = x;
        p->next = top;
        top = p;
        size++;
    }
}

int MyStackList::pop() { 
    Node* p = top;
    int x = -1;
    if (p == nullptr) {
        cout << "Stack Underflow!" << endl;
    }
    else {
        x = p->data;
        top = top->next;
        delete p;
        size--;
    }
    return x;
}

int MyStackList::peek() const{
    if (isEmpty()) {
        std::cout << "Stack is Empty.\n";
        return -1;
    }
    return top->data;
}

int MyStackList::getNodeCount() const{
    return size;
}

void MyStackList::printAll() const{ 
    if(isEmpty()) cout << "Stack is Empty." << endl;
    else{
        Node* p = top;
        while(p) {
            cout << p->data;
            if (p->next) std::cout << " -> ";
            p = p->next;
        }
        cout << " ("<< size << " nodes" << ") ";
        cout << endl;
    }
}