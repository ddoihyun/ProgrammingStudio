#include <iostream>
#include <string>
using namespace std;

void Ltrim(string& str){
    /*
    size_t find_first_not_of(const string& chars, size_t pos = 0) const;
        // 문자열 str에서 chars에 포함되지 않은 첫 번째 문자의 위치를 반환
        // string::npos는 실제로는 (size_t)-1, 즉 -1을 부호 없는 정수형(size_t) 로 변환한 값
    */
    int first = str.find_first_not_of(" \t");

    if (first == -1) {
        str = "";  
        return;
    }

    int newIndex = 0;
    for (int i = first; i < str.length(); i++) {
        str[newIndex] = str[i];
        newIndex++;
    }

    str.resize(newIndex);
}

void Rtrim(string& str){
    // size_t find_last_not_of(const string& chars, size_t pos = npos) const;
    int last = str.find_last_not_of(" \t");

    if (last == -1) {
        str = ""; 
        return;
    }

    str.resize(last + 1);
}

string Trim(string str){
    Ltrim(str);
    Rtrim(str);
    return str;
}

int main(void){
    string str;
    getline(cin, str);

    str = Trim(str);
    cout << str << endl;

    return 0;
}