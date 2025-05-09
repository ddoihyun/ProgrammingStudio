#include <iostream>
using namespace std;

struct Menu{
    string menu_name;       // 메뉴 이름  (공백 x)
    int price;              // 메뉴 가격
};

struct Cafe{
    string cafe_name;       // 식당 이름
    int count;              // 메뉴 개수
    Menu *m;              // 메뉴 리스트
};

void addMenu(Menu &m1) {
    cin >> m1.menu_name >> m1.price;
}

void addCafe(Cafe &r1) {
    // cin.ignore(); 
    getline(cin, r1.cafe_name);  

    cin >> r1.count;
    r1.m = new Menu[r1.count];   

    for(int i = 0; i < r1.count; i++) {
        addMenu(r1.m[i]);
    }
}

void displayMenus(Cafe &r1) {
    cout << "===== " << r1.cafe_name << " =====" << endl;
    for(int i = 0; i < r1.count; i++) {
        cout << r1.m[i].menu_name << " " << r1.m[i].price << endl;
    }
    cout << "=================" << endl;
}

int main(void) {
    Cafe c1;
    addCafe(c1);
    displayMenus(c1);

    delete[] c1.m;
    return 0;
}

/*
int main(void){
    Cafe* my_cafe = new Cafe;

    addCafe(*my_cafe);
    displayMenus(*my_cafe);

    delete[] my_cafe -> m;
    delete my_cafe;
}
*/