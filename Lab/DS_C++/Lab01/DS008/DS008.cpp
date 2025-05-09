#include <iostream>
using namespace std;

int main(void){
    string str;
    while(1){
        cin >> str;
        if(str.length() > 0 && str.length() <= 20) break;
        cout << "Invalid input. Try again.";
    }
    int count = 0;
    for(int i=0; i<str.length(); i++)
        str[i] = toupper(str[i]);

    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'I'){
            if(str[i+1] == 'V' || str[i+1] == 'X') count -= 1;
            else count+=1;}
        else if(str[i] == 'V') count+=5;
        else if(str[i] == 'X'){
            if(str[i+1] == 'L' || str[i+1] == 'C') count -= 10;
            else count += 10;}
        else if(str[i] == 'L') count+=50;
        else if(str[i] == 'C'){
            if(str[i+1] == 'D' || str[i+1] == 'M') count -= 100;
            else count += 100;}
        else if(str[i] == 'D') count+=500;
        else if(str[i] == 'M') count+=1000;
    }
    cout << count << endl;

    return 0;
}