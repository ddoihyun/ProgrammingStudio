#include <iostream>
using namespace std;

// 배열 상태 출력 함수
void print(int *arr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "[" << arr[i] << "]";
        if (i < n - 1) cout << " ";
    }
    cout << "\n";
}

// swap을 직접 구현
void mySwap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

// 선택 정렬 함수 (DEBUG 매크로가 정의되면 매 스텝마다 상태 출력)
void selectionSort(int *arr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_i = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_i]) {
                min_i = j;
            }
        }
        if (min_i != i) {
            mySwap(arr[i], arr[min_i]);
        }
    #ifdef DEBUG
            print(arr, n);
    #endif
    }
}

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

#ifdef DEBUG
    print(arr, n);
#endif

    selectionSort(arr, n);

#ifndef DEBUG
    print(arr, n);
#endif

    delete[] arr;
    return 0;
}