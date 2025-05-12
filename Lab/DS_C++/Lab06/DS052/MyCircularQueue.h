#include <iostream>
using namespace std;

class MyCircularQueue {
private: 
    int maxsize;  // Max size of the Queue 
	int front;  // front is used for deletion 
	int rear;   // rear is used for insertion
    int count;  // size of the queue   
	int* Q;     // dynamically allocated space for queue

public:
    MyCircularQueue(int size);  // constructor to make the Queue with size 
    ~MyCircularQueue();         // Destructor to remove from memory 
    void initialize();          // function to initialize the Queue
    void enqueue(const int& x);        // enqueue function for inserting an element at the rear of Queue
    int dequeue();              // dequeue function for deleting an element at the front of Queue
    bool isFull()const;         // check either the Queue is full or not
    bool isEmpty()const;        // check either Queue is empty or not
    void print() const;               // function for displaying the Queue 

    int Front() const;  
    int Rear() const;
    int size()const;                // function to return the size of the Queue
    void printDetail() const;       // function to print the details of the Queue

    int frontIndex() const;    // front 인덱스 반환
    int maxSize() const;       // maxsize 반환
    int at(int idx) const;     // 배열 인덱스로 값 반환
};