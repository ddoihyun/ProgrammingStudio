#include <iostream>
using namespace std;

namespace SortLib {
    // 요소 교환
    void mySwap(int &a, int &b) {
        int tmp = a;
        a = b;
        b = tmp;
    }

    // 1) Selection Sort (오름차순)
    void selectionSort(int *arr, int n) {
        for (int i = 0; i < n - 1; ++i) {
            int min_i = i;
            for (int j = i + 1; j < n; ++j) {
                if (arr[j] < arr[min_i])
                    min_i = j;
            }
            if (min_i != i)
                mySwap(arr[i], arr[min_i]);
        }
    }

    // 2) Insertion Sort (오름차순)
    void insertionSort(int *arr, int n) {
        for (int i = 1; i < n; ++i) {
            int key = arr[i], j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                --j;
            }
            arr[j + 1] = key;
        }
    }

    // 3) Bubble Sort (오름차순)
    void bubbleSort(int *arr, int n) {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - 1 - i; ++j) {
                if (arr[j] > arr[j + 1]) {
                    mySwap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    // 4) Quick Sort (오름차순)
    int partition(int *arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; ++j) {
            if (arr[j] < pivot) {
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

    // 5) Merge Sort (오름차순)
    void merge(int *arr, int l, int m, int r) {
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

    int N, K;
    if (!(cin >> N >> K)) {
        cout << "입력 오류: N과 K를 읽을 수 없습니다.\n";
        return 1;
    }
    if (N < 1 || N > 500) {
        cout << "입력 오류: N은 1 이상 500 이하이어야 합니다. (입력값=" 
             << N << ")\n";
        return 1;
    }
    if (K < 1 || K > N) {
        cout << "입력 오류: K는 1 이상 N 이하이어야 합니다. (입력값=" 
             << K << ")\n";
        return 1;
    }

    int *scores = new int[N];
    for (int i = 0; i < N; ++i) {
        if (!(cin >> scores[i])) {
            cout << "입력 오류: scores[" << i << "]를 읽을 수 없습니다.\n";
            delete[] scores;
            return 1;
        }
        if (scores[i] < 1 || scores[i] > 100000) {
            cout << "입력 오류: scores[" << i 
                 << "]는 1 이상 100000 이하이어야 합니다. (값=" 
                 << scores[i] << ")\n";
            delete[] scores;
            return 1;
        }
    }

    SortLib::quickSort(scores, 0, N - 1);

    cout << scores[N - K] << "\n";

    delete[] scores;
    return 0;
}
