#include <iostream>
#include <string>
using namespace std;

struct StringInfo {
    string value;
};

struct Result {
    int lastWordLength;
};

void ltrim(StringInfo& strInfo) {
    size_t start = strInfo.value.find_first_not_of(" \t");
    // string::npos는 실제로는 (size_t)-1, 즉 -1을 부호 없는 정수형(size_t) 로 변환한 값
    if (start == -1) {
        strInfo.value = "";
        return;
    }

    int index = 0;
    for (size_t i = start; i < strInfo.value.length(); i++) {
        strInfo.value[index++] = strInfo.value[i];
    }
    strInfo.value.resize(index);
}

void rtrim(StringInfo& strInfo) {
    size_t end = strInfo.value.find_last_not_of(" \t");
    // string::npos는 실제로는 (size_t)-1, 즉 -1을 부호 없는 정수형(size_t) 로 변환한 값
    if (end == -1) {
        strInfo.value = "";
        return;
    }

    strInfo.value.resize(end + 1);
}

void getLastWordLength(StringInfo& strInfo, Result& result) {
    int len = 0;
    for (int i = strInfo.value.length() - 1; i >= 0; i--) {
        if (strInfo.value[i] == ' ' || strInfo.value[i] == '\t') {
            break;}
        len++;
    }
    result.lastWordLength = len;
}

int main() {
    StringInfo strInfo;
    Result result;

    getline(cin, strInfo.value);

    ltrim(strInfo);
    rtrim(strInfo);
    getLastWordLength(strInfo, result);

    cout << result.lastWordLength << endl;

    return 0;
}
