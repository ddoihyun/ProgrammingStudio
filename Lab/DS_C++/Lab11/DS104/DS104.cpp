#include <iostream>
using namespace std;

struct Node {
    int data;    
    Node* next;

    Node(int d) : data(d), next(nullptr) {}
};

void append(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data;
        if (curr->next != nullptr) cout << " ";
        curr = curr->next;
    }
    cout << "\n";
}

void selectionSort(Node* head) {
    for (Node* i = head; i != nullptr; i = i->next) {
        Node* minNode = i;
        for (Node* j = i->next; j != nullptr; j = j->next) {
            if (j->data < minNode->data) {
                minNode = j;
            }
        }
        if (minNode != i) {
            int temp = i->data;
            i->data = minNode->data;
            minNode->data = temp;
        }
    }
}

int main() {
    int n;
    // cout << "Enter the number of elements: ";
    cin >> n;

    Node* head = nullptr;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        append(head, val);
    }

    cout << "\nOrigin List: ";
    printList(head);

    selectionSort(head);

    cout << "Result: ";
    printList(head);

    Node* curr = head;
    while (curr != nullptr) {
        Node* temp = curr;
        curr = curr->next;
        delete temp;
    }

    return 0;
}