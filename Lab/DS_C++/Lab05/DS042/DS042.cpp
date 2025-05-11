#include "MyLinkedStack.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

bool isOperator(const string& token) {
    return token == "+" || token == "-" || token == "*" || token == "/";
}

bool isNumber(const string& token) {
    if (token.empty() || token[0] != '#') return false;
    for (size_t i = 1; i < token.length(); i++) {
        if (!isdigit(token[i])) return false;
    }
    return true;
}

int main() {
    ifstream fin("input.txt");
    string line;

    while (getline(fin, line)) {
        stringstream ss(line);
        string token;
        MyStackList* mylist = new MyStackList();
        bool error = false;
        bool divisionByZero = false;
        bool invalid = false;
        bool printed = false;

        while (ss >> token) {
            if (isNumber(token)) {
                mylist->push(stoi(token.substr(1)));
            }
            else if (isOperator(token)) {
                if (mylist->getNodeCount() < 2) {
                    error = true;
                    break;
                }
                int b = mylist->pop();
                int a = mylist->pop();
                if (token == "+") mylist->push(a + b);
                else if (token == "-") mylist->push(a - b);
                else if (token == "*") mylist->push(a * b);
                else if (token == "/") {
                    if (b == 0) {
                        divisionByZero = true;
                        break;
                    }
                    mylist->push(a / b);
                }
            }
            else if (token == "=") {
                if (divisionByZero) {
                    cout << "=> Division by 0" << endl;
                }
                else if (error || invalid || mylist->getNodeCount() == 0) {
                    cout << "=> Expression error !!!" << endl;
                }
                else if (mylist->getNodeCount() > 1) {
                    cout << "=> Too many operands !!!" << endl;
                }
                else {
                    cout << line << " " << mylist->pop() << endl;
                }
                printed = true;
                break;
            }
            else {
                invalid = true;
                break;
            }
        }

        if (!printed) {
            if (divisionByZero) cout << "=> Division by 0" << endl;
            else if (error || invalid) cout << "=> Expression error !!!" << endl;
        }

        delete mylist;
    }

    return 0;
}
