#include <iostream>
using namespace std;

class MinHeap {
private:
    int arr[30];
    int length;

    void minHeapifyUp(int idx) {
        if (idx == 0) return;
        int parent = (idx - 1) / 2;
        if (arr[idx] < arr[parent]) {
            swap(arr[idx], arr[parent]);
            minHeapifyUp(parent);
        }
    }

    void minHeapifyDown(int root) {
        int smallest = root;
        int left  = 2 * root + 1;
        int right = 2 * root + 2;
        if (left < length && arr[left] < arr[smallest])
            smallest = left;
        if (right < length && arr[right] < arr[smallest])
            smallest = right;
        if (smallest != root) {
            swap(arr[root], arr[smallest]);
            minHeapifyDown(smallest);
        }
    }

public:
    MinHeap() : length(0) {}
    ~MinHeap() {}

    void buildHeap(int a[], int n) {
        length = 0;
        for (int i = 0; i < n; ++i) {
            arr[length] = a[i];
            minHeapifyUp(length);
            ++length;
        }
        printHeap();
    }

    void insertKey(int value) {
        if (length >= 30) {
            cout << "Overflow: Could not insertKey\n";
            return;
        }
        arr[length] = value;
        minHeapifyUp(length);
        ++length;
        printHeap();
    }

    int deleteKey() {
        if (length == 0) {
            cout << "Underflow: Heap is empty\n";
            return -1;
        }
        int rootVal = arr[0];
        arr[0] = arr[length-1];
        --length;
        minHeapifyDown(0);
        return rootVal;
    }

    int peek() const {
        if (length == 0) {
            cout << "Heap is empty\n";
            return -1;
        }
        return arr[0];
    }

    int size() const {
        return length;
    }

    bool isEmpty() const {
        return length == 0;
    }

    void printHeap() const {
        cout << "minHeap => ";
        for (int i = 0; i < length; ++i)
            cout << arr[i] << " ";
        cout << "\n";
    }
};

int main() {
    MinHeap heap;
    int menu;

    while (true) {
        cout << "1. Array to minHeap  2.insert  3.delete  4.print  0.quit > ";
        cin >> menu;

        if (menu == 0) {
            cout << "bye!\n";
            break;
        }

        switch (menu) {
            case 1: {
                int n;
                cin >> n;
                int tmp[30];
                for (int i = 0; i < n; ++i)
                    cin >> tmp[i];
                heap.buildHeap(tmp, n);
                break;
            }
            case 2: {
                int v;
                cin >> v;
                heap.insertKey(v);
                break;
            }
            case 3: {
                if (heap.isEmpty()) {
                    cout << "Heap is empty\n";
                } else {
                    int m = heap.deleteKey();
                    cout << "min value : " << m << "\n";
                    heap.printHeap();
                }
                break;
            }
            case 4:
                heap.printHeap();
                break;
            default:
                cout << "잘못된 입력입니다.\n";
        }
    }
    return 0;
}
