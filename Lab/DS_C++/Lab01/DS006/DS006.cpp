#include <iostream>
#include <cmath>    
using namespace std;

struct major {
    string subject;     // 과목명
    int credit;         // 학점 수
    int score;          // 취득점수
    double grade_point; // 평점 (4.5, 4.0, ...)
    string grade;       // 등급 (A+, A0, ...)
};

int main(void) {
    struct major m[3];
    double total = 0;
    int total_credit = 0;

    for (int i = 0; i < 3; i++) {
        cin >> m[i].subject >> m[i].credit >> m[i].score;
        total_credit += m[i].credit;

        if (m[i].score >= 95) {
            m[i].grade = "A+";
            m[i].grade_point = 4.5;
        } else if (m[i].score >= 90) {
            m[i].grade = "A0";
            m[i].grade_point = 4.0;
        } else if (m[i].score >= 85) {
            m[i].grade = "B+";
            m[i].grade_point = 3.5;
        } else if (m[i].score >= 80) {
            m[i].grade = "B0";
            m[i].grade_point = 3.0;
        } else if (m[i].score >= 75) {
            m[i].grade = "C+";
            m[i].grade_point = 2.5;
        } else if (m[i].score >= 70) {
            m[i].grade = "C0";
            m[i].grade_point = 2.0;
        } else if (m[i].score >= 65) {
            m[i].grade = "D+";
            m[i].grade_point = 1.5;
        } else if (m[i].score >= 60) {
            m[i].grade = "D0";
            m[i].grade_point = 1.0;
        } else {
            m[i].grade = "F";
            m[i].grade_point = 0.0;
        }

        total += m[i].credit * m[i].grade_point;
    }

    double gpa = total / total_credit;

    // 소수점 셋째 자리에서 내림 처리
    gpa = floor(gpa * 100) / 100;

    for (int i = 0; i < 3; i++) {
        cout << m[i].subject << " " << m[i].grade << " " << m[i].grade_point << endl;
    }
    printf("Total Credits %d, GPA %.2f\n", total_credit, gpa);

    return 0;
}