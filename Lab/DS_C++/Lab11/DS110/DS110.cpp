#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;
    queue<int> q;
    for (int i = 1; i <= N; ++i) {
        q.push(i);
    }
    while (q.size() > 1) {
        // 1) 맨 위 카드 버리기
        q.pop();
        // 2) 그 다음 맨 위 카드를 맨 아래로 옮기기
        int x = q.front();
        q.pop();
        q.push(x);
    }
    cout << q.front() << "\n";
    return 0;
}