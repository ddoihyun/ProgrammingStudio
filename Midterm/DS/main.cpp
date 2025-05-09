#include "MyStringStack.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    MyStringStack back_pages("Back Pages");     // 뒤로가기 URL 스택
    MyStringStack fore_pages("Fore Pages");     // 앞으로가기 URL 스택
    string current = "Home";                    // 현재 URL

    string command, url;                        // 입력받는 문자열
    while (true){
        cin >> command;
        if (command == "NEW") {
            cin >> url;
            back_pages.push(current);
            current = url;
            fore_pages.initialize();
        } 
        else if (command == "BACK") {
            if (back_pages.isEmpty())
                cout << "> No previous page." << endl;
            else {
                fore_pages.push(current);
                current = back_pages.pop();
            }
        } 
        else if (command == "FORE") {
            if (fore_pages.isEmpty())
                cout << "> No next page." << endl;
            else {
                back_pages.push(current);
                current = fore_pages.pop();
            }
        }
        else if (command == "CURRENT") {
            cout << "> " << current << endl;
        }
        else if (command == "SHOW") {
            cout << "> Current: " << current << endl;
            back_pages.printAll();
            fore_pages.printAll();
        }
        else if (command == "Q") {
            break;
        }
        else {
            cout << "> Wrong command." << endl;
        }
    }

    return 0;
}
