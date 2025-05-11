#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int x){
            data = x;
            next = NULL;
        }
};

class MyStackList{
private: 
    int size;       // size of the stack
    Node* top;      // top element

public:
    MyStackList();    // constructor to make the stack 
    ~MyStackList();   // Destructor to remove from memory 
    void initialize();
    // bool isFull();       // check either the stack is full or not
    bool isEmpty() const;      // check either stack is empty or not
    void push(const int& x);   // push function for inserting an element at the top of stack
    int pop();          // pop function for deleting the topmost element
    int peek() const;     // // top function for checking the topmost element present in the stack 
    int getNodeCount() const;   
    void printAll() const;     // function for displaying the stack   
};