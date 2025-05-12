#include <string>
#include <iostream>

using namespace std;

class MyCircularStringQueue {
    int maxsize; 
    int front;             
    int rear;              
    string* Q;        

public:
    MyCircularStringQueue(int size);
    ~MyCircularStringQueue();

    void initialize();                           
    bool isFull() const;                         
    bool isEmpty() const;                        
    int size() const;                           
    void enqueue(const string& x);        
    string dequeue();                 
};