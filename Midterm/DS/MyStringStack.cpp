#include "MyStringStack.h"
#include <iostream>

using namespace std;

MyStringStack::MyStringStack(string _title){
    head = NULL;
    length = 0;
    title = _title;
}

MyStringStack::~MyStringStack(){
}

void MyStringStack::push(const string& item){
    ListNode* new_node = new ListNode(item);
    new_node->next = head;
    head = new_node;
    length += 1;
}

string MyStringStack::pop(){
    string data;
    ListNode* node = head;

    if (!isEmpty()){
        data = head->data;
        head = head->next;
        delete node;
        length -= 1;
    }
    else{
        cout << "> Stack Underflow!" << endl;
    }
    return data;
}

string MyStringStack::top() const{
    return head->data;
}

bool MyStringStack::isEmpty() const{
    return length == 0;
}

void MyStringStack::initialize(){
    ListNode* temp;
    while(head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
    length = 0;
}

int MyStringStack::getNodeCnt() const{
    return length;
}

void MyStringStack::printAll() const {
    cout << "> " << title << "(" << length << ")" << endl;

    ListNode* temp = head;
    while (temp != NULL) {
        cout << "  +- " << temp->data << endl;
        temp = temp->next;
    }
}