#include "MyStack.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    int size;
    cin >> size;
    MyStack s1(size);

    string line;
    int element;

    while (true) {
        cin >> line;

        if (line == "push") {
            cin >> element;
            s1.push(element);
        } else if (line == "pop") {
            s1.pop();
        } else if (line == "print") {
            s1.print();
            break;
        }
    }

    return 0;
}
