#include <iostream>
using namespace std;

#define MAX_PRODUCTS 100

// Product class (상품 1개의 정보를 다루는 클래스)
// 멤버 변수 : 상품명, 원래 가격, 할인율, 제조사, 크기
// 멤버 메소드 : 상품입력(상품명(공백포함)), 가격, 할인율, 용량, 제조사(공백미포함), 상품출력, 할인율에 따른 판매가격 계산기

class Product{
    private:
        string productName;
        int originalPrice;
        int discountRate;
        string manufacturer;
        string size;
    public:
        void GetProductInfo(); // 상품 정보 입력
        int GetDiscountedPrice() const; // 할인된 가격 계산
        void Print() const; // 상품 출력
};

Product* productList[MAX_PRODUCTS];
int productCount = 0;

void Product::GetProductInfo(){
    cin.ignore(); 
    getline(cin, productName);
    cin >> originalPrice >> discountRate >> size >> manufacturer;
}


int Product::GetDiscountedPrice() const{
    return originalPrice * (100 - discountRate) / 100;
}

void Product::Print() const{
    cout << GetDiscountedPrice();
    if(discountRate == 0) cout << " (" << discountRate << "%)";
    else cout << " (-" << discountRate << "%)";
    printf("%20s %5s %10s\n", productName.c_str(), size.c_str(), manufacturer.c_str());
    // cout << productName << " " << size << " " << manufacturer << endl;
}

void AddMenu(){
    /*
    KIT KAT
    2500 10 85g KitKat
    */
   if (productCount >= MAX_PRODUCTS) {
    cout << "Can't add more products. Max capacity reached." << endl;
    return;
    }
    Product* p = new Product;
    p->GetProductInfo();
    productList[productCount++] = p;

}

void ListMenu(){
    /*
    2250 (-10%)         KITKAT  85g KitKat
    3781 (-5%) Sunkist Candy    317g HAITAI
    2700 (0%) Chocolate mix bar 34g MARS
    */
    for (int i = 0; i < productCount; i++)
        productList[i]->Print();
}

int main(void){
    int menu;
    while(true){
        cout << "1. Add 2. List 3. Quit > ";
        cin >> menu;
        if(menu == 3) break;
        else if(menu == 1){
            AddMenu();
        }
        else if(menu == 2){
            ListMenu();
        }
        else cout << "Invalid menu! Retry." << endl;
    }

    for (int i = 0; i < productCount; i++) {
        delete productList[i];
    }

    return 0;
}