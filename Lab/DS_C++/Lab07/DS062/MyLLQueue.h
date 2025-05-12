#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

class MyLLQueue {
private:
    Node* front;
    Node* rear;

public:
    MyLLQueue();                 // 생성자
    ~MyLLQueue();                // 소멸자

    bool isempty();              // 큐가 비어있는지 확인
    void enqueue(int value);     // 큐에 삽입
    void dequeue();              // 큐에서 제거
    Node* getFront();  // front 포인터 반환
    Node* getRear();   // rear 포인터 반환
    void showFront();            // front 값 출력
    void showRear();             // rear 값 출력
    void displayQueue();         // 큐 전체 출력
};