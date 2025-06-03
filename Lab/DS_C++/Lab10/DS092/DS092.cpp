#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    priority_queue<int> maxHeap;

    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        maxHeap.push(x);
    }

    int ans = 0;
    for (int i = 0; i < K; ++i) {
        ans = maxHeap.top();
        maxHeap.pop();
    }

    cout << ans << "\n";
    return 0;
}