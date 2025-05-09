#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    char str[50];
    int count[27] = {0}; // 0번 인덱스: 공백 개수, 1~26번 인덱스: A~Z 개수

    fgets(str, sizeof(str), stdin);
    
    if (str[strlen(str) - 1] == '\n') 
        str[strlen(str) - 1] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') count[0]++;
        else if (isalpha(str[i]))
            count[toupper(str[i]) - 'A' + 1]++;
    }

    // blank
    if (count[0] > 0)
        printf("blanks : %d\n", count[0]);

    // alphabet
    for (int i = 1; i <= 26; i++)
        if (count[i] > 0) 
            printf("%c : %d\n", 'A' + i - 1, count[i]);

    return 0;
}

/*
int main(){
    string str;
    int count[26] = {0};
    getline(cin, str);
    for(int i=0; i<str.length; i++){
        char c = str[i];
        if(isalpha(c)) count[toupper(c)-'A']++;
    }
    
    for(int i=0; i<26; i++){
    if(count[i] != 0)
        cout << (char)(i+'A') << " : " << count[i] << endl;
    }
}
*/