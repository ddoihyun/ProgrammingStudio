#include <iostream>
using namespace std;
#define _DEBUG

int heap_size = 0;

void printArray(int* arr, int heap_size) {
    cout << "==> Heap : ";
    for (int i = 0; i < heap_size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void maxHeapify(int arr[], int rooti) {
    int largest = rooti;
    int left = 2 * rooti + 1;
    int right = 2 * rooti + 2;

    if (left < heap_size && arr[left] > arr[largest])
        largest = left;
    if (right < heap_size && arr[right] > arr[largest])
        largest = right;

    if (largest != rooti) {
        swap(arr[rooti], arr[largest]);
        maxHeapify(arr, largest);  // 재귀 호출
    }
}

void insertKey(int arr[], int N, int value) {
    if (heap_size >= N) {
        cout << "\nOverflow: Could not insertKey\n";
        return;
    }

    // 새 값을 배열의 마지막에 삽입
    int i = heap_size++;
    arr[i] = value;

    // 부모와 비교하며 up-heap (bubble-up)
    while (i != 0 && arr[(i - 1) / 2] < arr[i]) {
        swap(arr[i], arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }

#ifdef _DEBUG
    printArray(arr, heap_size);
#endif  
}

void deleteKey(int arr[], int N) {
    if (heap_size == 0) {
        cout << "\nCould not deleteKey\n";
        return;
    }

#ifdef _DEBUG
    cout << "=> Delete " << arr[0] << endl;
#endif    

    // 마지막 값을 루트로 이동
    arr[0] = arr[heap_size - 1];
    heap_size--;

    // Heapify
    maxHeapify(arr, 0);

#ifdef _DEBUG
    printArray(arr, heap_size);
#endif     
}

int main() {
    int arr[20];
    int menu;
    while (1) {
        cout << "1. insert 2.delete 3.print 4.quit > ";
        cin >> menu;
        if (menu == 1) {
            int value;
            cout << "new value? ";
            cin >> value;
            insertKey(arr, 20, value);
        }
        else if (menu == 2) {
            deleteKey(arr, 20);
        }
        else if (menu == 3) {
            printArray(arr, heap_size);
        }
        else break;
    }
    cout << "Bye!" << endl;
    return 0;
}
