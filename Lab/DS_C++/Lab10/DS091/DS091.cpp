#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        string input;
        getline(cin, input);

        if (input == "q") {
            break;
        }

        stack<char> leftStack;
        stack<char> rightStack;

        for (size_t i = 0; i < input.size(); ++i) {
            char ch = input[i];
            if (ch == '<') {
                // '<' : 왼쪽으로 이동
                if (!leftStack.empty()) {
                    rightStack.push(leftStack.top());
                    leftStack.pop();
                }
            }
            else if (ch == '>') {
                // '>' : 오른쪽으로 이동
                if (!rightStack.empty()) {
                    leftStack.push(rightStack.top());
                    rightStack.pop();
                }
            }
            else {
                leftStack.push(ch);
            }
        }

        stack<char> tempStack;
        while (!leftStack.empty()) {
            tempStack.push(leftStack.top());
            leftStack.pop();
        }

        string result;
        while (!tempStack.empty()) {
            result.push_back(tempStack.top());
            tempStack.pop();
        }
        while (!rightStack.empty()) {
            result.push_back(rightStack.top());
            rightStack.pop();
        }

        cout << "=> " << result << "\n";
    }

    return 0;
}