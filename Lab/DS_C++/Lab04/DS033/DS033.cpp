#include "CouponStack.h"
#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    cin.ignore();

    CouponStack stack(size);
    string line;

    while (true) {
        getline(cin, line);
        if (line == "q") break;
        else if (line == "print") stack.print();
        else if (line == "rprint") stack.rprint();
        else if (line[0] == '+') {
            int rank = 0;
            int pos = 2;
            string item;
            while (isdigit(line[pos])) {
                rank = rank * 10 + (line[pos] - '0');
                pos++;
            }
            while (line[pos] == ' ') pos++;
            item = line.substr(pos);

            Coupon c;
            c.rank = rank;
            c.item = item;
            stack.push(c);
        } else if (line[0] == '-') {
            const Coupon* c = stack.pop(); 
            if (c != nullptr) {
                cout << c->rank << "등 - " << c->item << endl;
            }
        }
    }

    return 0;
}
