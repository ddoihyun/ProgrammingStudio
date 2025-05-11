#include <string>
using namespace std;

class MyStack {
private:
    int maxsize;
    int top;
    string* list;

public:
    MyStack(int size = 100);
    ~MyStack();

    bool isEmpty();
    bool isFull();
    void push(string element);
    void clear();
    string* pop();
    void print();
};
