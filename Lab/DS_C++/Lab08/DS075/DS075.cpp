#include <iostream>
using namespace std;

void print(int *arr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "[" << arr[i] << "]";
        if (i < n - 1) cout << " ";
    }
    cout << "\n";
}

void merge(int *arr, int l, int m, int r, int n) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int *L = new int[n1];
    int *R = new int[n2];
    for (int i = 0; i < n1; ++i){     
        L[i] = arr[l + i];
    }
    for (int j = 0; j < n2; ++j){      
        R[j] = arr[m + 1 + j];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) 
            arr[k++] = L[i++];
        else        
            arr[k++] = R[j++];
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    delete[] L;
    delete[] R;

#ifdef DEBUG
    print(arr, n);
#endif
}

void mergeSort(int *arr, int l, int r, int n) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m, n);       
        mergeSort(arr, m + 1, r, n);   
        merge(arr, l, m, r, n);        
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

    mergeSort(arr, 0, n - 1, n);

#ifndef DEBUG
    print(arr, n);
#endif

    delete[] arr;
    return 0;
}
