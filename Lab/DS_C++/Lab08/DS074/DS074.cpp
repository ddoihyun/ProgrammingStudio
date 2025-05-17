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

int partition(int *arr, int low, int high, int n) {
    int pivot = arr[high];       // 맨 마지막 요소를 pivot으로 선택
    int i = low - 1;             // 작은 값 위치 추적자

    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            mySwap(arr[i], arr[j]);
        }
    }
    mySwap(arr[i + 1], arr[high]);

#ifdef DEBUG
    print(arr, n);
#endif

    return i + 1;                
}

void quickSort(int *arr, int low, int high, int n) {
    if (low < high) {
        int pi = partition(arr, low, high, n);
        quickSort(arr, low, pi - 1, n);
        quickSort(arr, pi + 1, high, n);
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

    quickSort(arr, 0, n - 1, n);

#ifndef DEBUG
    print(arr, n);
#endif

    delete[] arr;
    return 0;
}
