#include <iostream>
#include <string>
#include "MyLinkedStack.h"

using namespace std;

int main() {
    string input;
    while (getline(cin, input)) {
        if (input == "q")
            break;
        MyStackList leftStack;
        MyStackList rightStack;
        for (size_t i = 0; i < input.length(); ++i) {
            char c = input[i];
            if (c == '<') {
                if (!leftStack.isEmpty()) {
                    int v = leftStack.pop();
                    rightStack.push(v);
                }
            } else if (c == '>') {
                if (!rightStack.isEmpty()) {
                    int v = rightStack.pop();
                    leftStack.push(v);
                }
            } else {
                leftStack.push(c);
            }
        }
        MyStackList tempStack;
        while (!leftStack.isEmpty()) {
            tempStack.push(leftStack.pop());
        }
        cout << "=> ";
        while (!tempStack.isEmpty()) {
            cout << static_cast<char>(tempStack.pop());
        }
        while (!rightStack.isEmpty()) {
            cout << static_cast<char>(rightStack.pop());
        }
        cout << endl;
    }
    return 0;
}