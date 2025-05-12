#include "MyLLQueue.h"
#include <iostream>
using namespace std;

MyLLQueue::MyLLQueue() {
    front = nullptr;
    rear = nullptr;
}

MyLLQueue::~MyLLQueue() {
    while (!isempty()) {
        dequeue();
    }
}

//Function to check if queue is empty or not
bool MyLLQueue::isempty(){
    if(front == NULL && rear == NULL) return true;
    else return false;
}

//function to enter elements in queue
void MyLLQueue::enqueue(int value){
    Node *ptr = new Node();
    ptr->data = value;
    ptr->link = NULL;

    //If inserting the first element/node
    if(front == NULL){
        front = ptr;
        rear = ptr;
    }
    else{
        rear ->link = ptr;
        rear = ptr;
    }
}

//function to delete/remove element from queue
void MyLLQueue::dequeue( ){
    if(isempty()) cout << "Queue is empty" << endl;
    else{
        //only one element/node in queue.
        if( front == rear){
            free(front);
            front = rear = NULL;
        }
        else{
            Node *ptr = front;
            front = front->link;
            free(ptr);
        }
    }
}

//function to show the element at front
void MyLLQueue::showFront( ){
    if(isempty()) cout<<"Queue is empty\n";
    else cout << "element at front: " << front->data;
}

//function to show the element at rear
void MyLLQueue::showRear( ){
    if(isempty()) cout<<"Queue is empty\n";
    else cout << "element at rear: " << rear->data;
}

//function to display queue
void MyLLQueue::displayQueue(){
    if (isempty()) cout << "Queue is empty\n";
    else {
        Node *ptr = front;
        while(ptr != nullptr){
            cout << ptr->data;
            ptr = ptr->link;
            if(ptr != nullptr) cout << " -> ";
        }
        cout << endl;
    }
}

Node* MyLLQueue::getFront() {
    return front;
}

Node* MyLLQueue::getRear() {
    return rear;
}