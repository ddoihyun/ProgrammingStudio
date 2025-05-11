#include "MyStack.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("gpa.txt");
    // ifstream file("gpa1.txt");

    if (!file) {
        cout << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    MyStack s1;
    double maxGPA = -1.0;
    double gpa;
    string name;

    while (!file.eof()) {
        file >> gpa;
        if (file.fail()) break; 
        file.get(); 
        getline(file, name); 

        if (gpa > maxGPA) {
            maxGPA = gpa;
            s1.clear();
            s1.push(name);
        } 
        else if (gpa == maxGPA) {
            s1.push(name);
        }
    }

    file.close();

    cout << "Top GPA = " << maxGPA << endl;
    s1.print();

    return 0;
}
