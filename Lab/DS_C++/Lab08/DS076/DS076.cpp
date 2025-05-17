#include <iostream>
using namespace std;

namespace SortLib {
    void print(int *arr, int n) {
        for (int i = 0; i < n; ++i) {
            cout << "[" << arr[i] << "]";
            if (i < n - 1) cout << " ";
        }
        cout << "\n";
    }

    void mySwap(int &a, int &b) {
        int tmp = a; a = b; b = tmp;
    }

    // 1) Selection Sort
    void selectionSort(int *arr, int n) {
    #ifdef DEBUG
        print(arr, n);
    #endif
        for (int i = 0; i < n - 1; ++i) {
            int min_i = i;
            for (int j = i + 1; j < n; ++j)
                if (arr[j] < arr[min_i])
                    min_i = j;
            if (min_i != i) {
                mySwap(arr[i], arr[min_i]);
            }
        #ifdef DEBUG
            print(arr, n);  
        #endif
        }
    }

    // 2) Insertion Sort
    void insertionSort(int *arr, int n) {
    #ifdef DEBUG
        print(arr, n);
    #endif
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

    // 3) Bubble Sort (오름차순)
    void bubbleSort(int *arr, int n) {
    #ifdef DEBUG
        print(arr, n);
    #endif
        for (int i = 0; i < n - 1; ++i) {
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

    // 4) Quick Sort
    int partition(int *arr, int low, int high, int n) {
        int pivot = arr[high];
        int i = low - 1;
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

    // 5) Merge Sort
    void merge(int *arr, int l, int m, int r, int n) {
        int n1 = m - l + 1, n2 = r - m;
        int *L = new int[n1], *R = new int[n2];
        for (int i = 0; i < n1; ++i) L[i] = arr[l + i];
        for (int j = 0; j < n2; ++j) R[j] = arr[m + 1 + j];

        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) 
                arr[k++] = L[i++];
            else              
                arr[k++] = R[j++];
        }
        while (i < n1) arr[k++] = L[i++];
        while (j < n2) arr[k++] = R[j++];
        delete[] L; delete[] R;

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
}

int main() {
    while (true) {
        cout << "1.selection 2.insertion 3.bubble 4.quick 5.merge 6.exit > ";
        int choice; 
        if (!(cin >> choice)) break;

        if (choice == 6) {
            cout << "bye!\n";
            break;
        }
        if (choice < 1 || choice > 5) {
            cout << "잘못된 선택입니다.\n";
            continue;
        }

        cout << "Enter count: ";
        int n; cin >> n;
        int *arr = new int[n];
        cout << "Enter numbers: ";
        for (int i = 0; i < n; ++i) cin >> arr[i];

        switch (choice) {
            case 1:
                cout << "==== selection sort ====\n";
                SortLib::selectionSort(arr, n);
                break;
            case 2:
                cout << "==== insertion sort ====\n";
                SortLib::insertionSort(arr, n);
                break;
            case 3:
                cout << "==== bubble sort ====\n";
                SortLib::bubbleSort(arr, n);
                break;
            case 4:
                cout << "==== quick sort ====\n";
                SortLib::quickSort(arr, 0, n - 1, n);
                break;
            case 5:
                cout << "==== merge sort ====\n";
                SortLib::mergeSort(arr, 0, n - 1, n);
                break;
        }

    #ifndef DEBUG
        SortLib::print(arr, n);
    #endif
        delete[] arr;
    }
    return 0;
}
