#include <iostream>
#include <string>
#include <sstream>
#include "MyCircularQueue.h"
using namespace std;

int main() {
    int size;
    cin >> size;
    cin.ignore(); 
    MyCircularQueue q(size + 1); 

    string line;
    while (getline(cin, line)) {
        if (line.empty()) continue;

        stringstream ss(line);
        string cmd;
        ss >> cmd;

        if (cmd == "en") {
            int val;
            ss >> val;
            q.enqueue(val);
        } else if (cmd == "de") {
            q.dequeue();
        } else if (cmd == "front") {
            cout << "=> " << q.Front() << endl;
        } else if (cmd == "rear") {
            cout << "=> " << q.Rear() << endl;
        } else if (cmd == "size") {
            cout << "=> " << q.size() << endl;
        } else if (cmd == "empty") {
            cout << "=> " << (q.isEmpty() ? 1 : 0) << endl;
        } else if (cmd == "print") {
            for (int i = 0; i < q.size(); ++i) {
                int idx = (q.frontIndex() + i) % q.maxSize();
                cout << q.at(idx);
                if (i != q.size() - 1) cout << " => ";
            }
            cout << endl;
        } else if (cmd == "q") {
            cout << "bye!" << endl;
            break;
        }
    }

    return 0;
}
