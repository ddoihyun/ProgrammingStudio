#include <iostream>
#include <string>
using namespace std;

string CompareWords(char* s1, char* s2, char* s3) {
    string result = "";
    int i = 0;
    
    while (s1[i] != '\0' && s2[i] != '\0' && s3[i] != '\0') {
        if (s1[i] == s2[i] && s2[i] == s3[i]) {
            result += s1[i];
            i++;} 
        else break;
    }

    if (result.length() == 0) return "?";


    return result;
}

int main(void) {
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    cout << CompareWords(&str1[0], &str2[0], &str3[0]) << endl;

    return 0;
}