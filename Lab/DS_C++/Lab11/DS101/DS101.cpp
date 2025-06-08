#include <iostream>
using namespace std;

namespace SortLib {
    // 결과 출력 (공백 구분, 마지막에 개행)
    void print(int *arr, int n) {
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << (i < n - 1 ? ' ' : '\n');
        }
    }

    // 요소 교환
    void mySwap(int &a, int &b) {
        int tmp = a;
        a = b;
        b = tmp;
    }

    // 1) Selection Sort (내림차순)
    void selectionSort(int *arr, int n) {
        for (int i = 0; i < n - 1; ++i) {
            int max_i = i;
            for (int j = i + 1; j < n; ++j) {
                if (arr[j] > arr[max_i]) {
                    max_i = j;
                }
            }
            if (max_i != i) {
                mySwap(arr[i], arr[max_i]);
            }
        }
    }

    // 2) Insertion Sort (내림차순)
    void insertionSort(int *arr, int n) {
        for (int i = 1; i < n; ++i) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                --j;
            }
            arr[j + 1] = key;
        }
    }

    // 3) Bubble Sort (내림차순)
    void bubbleSort(int *arr, int n) {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - 1 - i; ++j) {
                if (arr[j] < arr[j + 1]) {
                    mySwap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    // 4) Quick Sort (내림차순)
    int partition(int *arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; ++j) {
            if (arr[j] > pivot) {
                ++i;
                mySwap(arr[i], arr[j]);
            }
        }
        mySwap(arr[i + 1], arr[high]);
        return i + 1;
    }
    void quickSort(int *arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    // 5) Merge Sort (내림차순)
    void merge(int *arr, int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;
        int *L = new int[n1];
        int *R = new int[n2];
        for (int i = 0; i < n1; ++i) L[i] = arr[l + i];
        for (int j = 0; j < n2; ++j) R[j] = arr[m + 1 + j];

        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (L[i] >= R[j])      // 내림차순 비교
                arr[k++] = L[i++];
            else
                arr[k++] = R[j++];
        }
        while (i < n1) arr[k++] = L[i++];
        while (j < n2) arr[k++] = R[j++];

        delete[] L;
        delete[] R;
    }
    void mergeSort(int *arr, int l, int r) {
        if (l < r) {
            int m = l + (r - l) / 2;
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) {
        cout << "입력 오류: N을 읽을 수 없습니다.\n";
        return 1;
    }
    if (N < 1 || N > 500) {
        cout << "입력 오류: N은 1 이상 500 이하이어야 합니다. (입력값=" 
             << N << ")\n";
        return 1;
    }

    int *arr = new int[N];
    for (int i = 0; i < N; ++i) {
        if (!(cin >> arr[i])) {
            cout << "입력 오류: 숫자를 읽을 수 없습니다. (인덱스=" 
                 << i << ")\n";
            delete[] arr;
            return 1;
        }
        if (arr[i] < 1 || arr[i] > 100000) {
            cout << "입력 오류: 숫자의 범위는 1 이상 100000 이하이어야 합니다. (arr[" 
                 << i << "]=" << arr[i] << ")\n";
            delete[] arr;
            return 1;
        }
    }

    SortLib::quickSort(arr, 0, N - 1);

    // 결과 출력
    SortLib::print(arr, N);

    delete[] arr;
    return 0;
}
