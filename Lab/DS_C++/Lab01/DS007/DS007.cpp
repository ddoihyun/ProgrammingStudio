#include <iostream>
using namespace std;

int main(void){
    string str;
    cin >> str;
    int count = 0;
    char tmp;

    for(int i=0; i<str.length(); i++)
        str[i] = toupper(str[i]);

    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'I') count+=1;
        else if(str[i] == 'V') count+=5;
        else if(str[i] == 'X') count+=10;
        else if(str[i] == 'L') count+=50;
        else if(str[i] == 'C') count+=100;
        else if(str[i] == 'D') count+=500;
        else if(str[i] == 'M') count+=1000;
    }
    cout << count << endl;

    return 0;
}