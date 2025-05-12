#include "MyCircularStringQueue.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ifstream fin("data.txt");
    if (!fin) {
        cout << "data.txt 파일을 열 수 없습니다." << endl;
        return 1;
    }

    double highest = 0.0, gpa;
    string name;
    MyCircularStringQueue q(100);

    while (fin >> gpa >> name) {
        if (gpa > highest) {
            highest = gpa;
            q.initialize();
            q.enqueue(name);
        }
        else if (fabs(gpa - highest) < 1e-6) {
            q.enqueue(name);
        }
    }

    cout << "Highest GPA = "
              << fixed << setprecision(1)
              << highest << "\n";

    while (!q.isEmpty()) {
        cout << q.dequeue() << " "
                  << fixed << setprecision(1)
                  << highest << "\n";
    }

    return 0;
}
