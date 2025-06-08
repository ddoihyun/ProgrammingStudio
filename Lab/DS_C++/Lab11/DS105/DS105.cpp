#include <iostream>
#include <string>
using namespace std;

struct Node {
    int score;
    string name;
    Node* next;
    Node(int s, const string& n) : score(s), name(n), next(nullptr) {}
};

void append(Node*& head, int score, const string& name) {
    Node* node = new Node(score, name);
    if (!head) {
        head = node;
    } else {
        Node* p = head;
        while (p->next) p = p->next;
        p->next = node;
    }
}

void printResult(Node* head) {
    int rank = 1;
    for (Node* p = head; p; p = p->next, ++rank) {
        cout << rank << "> " << p->score << " " << p->name << "\n";
    }
}

void freeList(Node* head) {
    while (head) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }
}

namespace SortLib {
    Node* getTail(Node* cur) {
        while (cur && cur->next) cur = cur->next;
        return cur;
    }

    Node* partition(Node* head, Node* end, Node** newHead, Node** newEnd) {
        Node* pivot = end;
        Node* prev = nullptr;
        Node* cur  = head;
        Node* tail = pivot;

        *newHead = nullptr;
        *newEnd  = nullptr;

        while (cur != pivot) {
            if (cur->score > pivot->score) {
                // pivot보다 크면 리스트 앞쪽에 남겨둠
                if (!*newHead) *newHead = cur;
                prev = cur;
                cur  = cur->next;
            } else {
                // pivot 이하이면 tail 쪽으로 이동
                Node* tmp = cur->next;
                if (prev) prev->next = cur->next;
                cur->next = nullptr;
                tail->next = cur;
                tail = cur;
                cur  = tmp;
            }
        }

        if (!*newHead) *newHead = pivot;
        *newEnd = tail;
        return pivot;
    }

    Node* quickSortRec(Node* head, Node* end) {
        if (!head || head == end)
            return head;

        Node *newHead = nullptr, *newEnd = nullptr;
        Node* pivot = partition(head, end, &newHead, &newEnd);

        if (newHead != pivot) {
            Node* tmp = newHead;
            while (tmp->next != pivot) tmp = tmp->next;
            tmp->next = nullptr;

            newHead = quickSortRec(newHead, tmp);

            // 정렬된 앞부분 끝에 pivot 연결
            tmp = getTail(newHead);
            tmp->next = pivot;
        }

        pivot->next = quickSortRec(pivot->next, newEnd);
        return newHead;
    }

    void quickSort(Node** headRef) {
        *headRef = quickSortRec(*headRef, getTail(*headRef));
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    Node* head = nullptr;
    for (int i = 0; i < N; ++i) {
        int score;
        string name;
        cin >> score >> name;
        append(head, score, name);
    }

    SortLib::quickSort(&head);

    // 결과 출력
    printResult(head);

    freeList(head);
    return 0;
}
