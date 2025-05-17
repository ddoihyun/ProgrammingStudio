#include <iostream>
using namespace std;

void print(int *arr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "[" << arr[i] << "]";
        if (i < n - 1) cout << " ";
    }
    cout << "\n";
}

void insertionSort(int *arr, int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];      
        int j = i - 1;         

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;

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

    insertionSort(arr, n);

#ifndef DEBUG
    print(arr, n);
#endif

    delete[] arr;
    return 0;
}
