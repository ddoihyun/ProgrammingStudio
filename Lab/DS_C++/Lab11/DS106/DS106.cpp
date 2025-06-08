// #include <iostream>
// using namespace std;

// class MinHeap {
// private:
//     int arr[30]; 
//     int length;        // 노드 개수

//     void minHeapifyDown(int root) {
//         int smallest = root;
//         int left = 2 * root + 1;
//         int right = 2 * root + 2;
        
//         if (left < length && arr[left] < arr[smallest])
//             smallest = left;
//         if (right < length && arr[right] < arr[smallest])
//             smallest = right;
        
//         if (smallest != root) {
//             swap(arr[root], arr[smallest]);
//             minHeapifyDown(smallest);
//         }
//     }

//     void minHeapifyUp(int index) {
//         while (index > 0) {
//             int parent = (index - 1) / 2;
//             if (arr[parent] > arr[index]) {
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             } else break;
//         }
//     }

// public:
//     // 생성자, 소멸자
//     MinHeap() : length(0) {}
//     ~MinHeap() {}

//     // 값 삽입
//     void insertKey(int value) {
//         if (length >= 30) {
//             cout << "Overflow: Could not insertKey" << endl;
//             return;
//         }
//         arr[length++] = value;
//         minHeapifyUp(length - 1);
//     }

//     int deleteKey() {
//         if (length <= 0) {
//             cout << "Could not deleteKey" << endl;
//             return -1;
//         }
//         int root = arr[0];
//         arr[0] = arr[--length];
//         minHeapifyDown(0);
//         return root;
//     }

//     // 최소값 확인
//     int peek() const {
//         if (length <= 0) {
//             cout << "Heap is empty" << endl;
//             return -1;
//         }
//         return arr[0];
//     }

//     int size() const {
//         return length;
//     }

//     bool isEmpty() const {
//         return length == 0;
//     }

//     void buildHeap(int data[], int n) {
//         length = (n > 30 ? 30 : n);
//         for (int i = 0; i < length; ++i)
//             arr[i] = data[i];
//         for (int i = (length / 2) - 1; i >= 0; --i)
//             minHeapifyDown(i);
//     }

//     void printHeap() const {
//         cout << "minHeap => ";
//         for (int i = 0; i < length; ++i)
//             cout << arr[i] << " ";
//         cout << endl;
//     }
// };

// int main() {
//     MinHeap h;
//     int menu;

//     while (true) {
//         cout << "1. Array to minHeap 2.insert 3.delete 4.print 0.quit > ";
//         cin >> menu;

//         if (menu == 1) {
//             int n;
//             cin >> n;
//             int data[30];
//             for (int i = 0; i < n; ++i)
//                 cin >> data[i];
//             h.buildHeap(data, n);
//         }
//         else if (menu == 2) {
//             int value;
//             cin >> value;
//             h.insertKey(value);
//         }
//         else if (menu == 3) {
//             int minVal = h.deleteKey();
//             if (minVal != -1)
//                 cout << "min value : " << minVal << endl;
//         }
//         else if (menu == 4) {
//             h.printHeap();
//         }
//         else if (menu == 0) {
//             break;
//         }
//     }

//     cout << "bye!" << endl;
//     return 0;
// }
