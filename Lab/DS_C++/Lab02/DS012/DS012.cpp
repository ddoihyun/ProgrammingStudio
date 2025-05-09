#include <iostream>
using namespace std;

struct Stuff{
    string name;
    int price;
    string manufacturer;
};

string tolower(string str){
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i]-'A'+'a';
    }
    return str;
}

bool Compare_Stuff(Stuff *s1, Stuff *s2){
    // compare name(case-insensitive) && compare price
    if((tolower(s1->name) == tolower(s2->name)) && s1->price == s2->price)
        return true;
    return false;
}

int main(void){
    Stuff s1, s2;
    cin >> s1.name >> s1.price >> s1.manufacturer;
    cin >> s2.name >> s2.price >> s2.manufacturer;
    
    if(Compare_Stuff(&s1, &s2)) cout << s1.name << " is equal" << endl;
    else cout << s1.name << " and " << s2.name << " is not equal" << endl;

    return 0;
}