#include <iostream>
using namespace std;

void print(int *arr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "[" << arr[i] << "]";
        if (i < n - 1) cout << " ";
    }
    cout << "\n";
}

void mySwap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void bubbleSortAsc(int *arr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        // 한 패스가 끝날 때마다 가장 큰 값이 뒤로 간다
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                mySwap(arr[j], arr[j + 1]);
            }
        }
#ifdef DEBUG
        print(arr, n);
#endif
    }
}

void bubbleSortDesc(int *arr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] < arr[j + 1]) {
                mySwap(arr[j], arr[j + 1]);
            }
        }
#ifdef DEBUG
        print(arr, n);
#endif
    }
}

int main() {
    int n;
    cin >> n;                     // 수열 길이 입력
    int *orig = new int[n];       // 원본을 보관할 배열
    for (int i = 0; i < n; ++i) {
        cin >> orig[i];           // 수열 요소 입력
    }

    cout << "=== ascending order ===\n";
#ifdef DEBUG
    print(orig, n);
#endif

    int *asc = new int[n];
    for (int i = 0; i < n; ++i) asc[i] = orig[i];
    bubbleSortAsc(asc, n);

#ifndef DEBUG
    print(asc, n);
#endif
    delete[] asc;

    cout << "=== descending order ===\n";
#ifdef DEBUG
    print(orig, n);
#endif

    int *desc = new int[n];
    for (int i = 0; i < n; ++i) desc[i] = orig[i];
    bubbleSortDesc(desc, n);

#ifndef DEBUG
    print(desc, n);
#endif
    delete[] desc;
    delete[] orig;

    return 0;
}
