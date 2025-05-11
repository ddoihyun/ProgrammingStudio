#include <string>
using namespace std;

struct Coupon {
    int rank;
    string item;
};

class CouponStack {
private:
    int maxsize;
    int top;
    Coupon* list;

public:
    CouponStack(int size = 10);
    ~CouponStack();

    void initialize();
    bool isEmpty() const;               
    bool isFull() const;                
    void push(const Coupon& elem);      
    Coupon* pop();         

    void print();
    void rprint();
};
