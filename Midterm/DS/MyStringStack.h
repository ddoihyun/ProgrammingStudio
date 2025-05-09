#include <iostream>

using namespace std;

class ListNode{
public:
    string data;
    ListNode* next;

    ListNode(string _data)    {
        data = _data;
        next = NULL;
    }
};

class MyStringStack{
private:
    ListNode* head;
    int length;
    string title;

public:
    MyStringStack(string _title);
    ~MyStringStack();
    void initialize();
    bool isEmpty() const;
    void push(const string& item);
    int getNodeCnt() const;
    string pop();
    string top() const;
    void printAll() const;
};
