#include "MyLinkedStack.h"
#include <iostream>
using namespace std;

int main() {
    string cmd;
    MyStackList stack;
    while (cin >> cmd) {
        if (cmd == "push") {
            int x;
            cin >> x;
            stack.push(x);
        } 
        else if (cmd == "pop") {
            stack.pop();
            // cout << stack.pop() << endl;
        } 
        else if (cmd == "peek") {
            cout << stack.peek() << endl;
        } 
        else if (cmd == "clear") {
            stack.initialize();
        } 
        else if (cmd == "print") {
            stack.printAll();
        }
        else if (cmd == "q") {
            cout << "Bye!" << endl;
            break;
        }
        else
            cout << "invalid command" << endl;
    }
    return 0;
}
