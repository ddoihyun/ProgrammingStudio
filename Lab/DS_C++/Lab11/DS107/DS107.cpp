#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareDesc(int a, int b) {
    return a > b;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> scores(n + m);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> scores[n + i];
    }
    sort(scores.begin(), scores.end(), compareDesc);
    for (size_t i = 0; i < scores.size(); ++i) {
        cout << scores[i] << " ";
    }
    cout << "\n";  // <— 이 줄을 추가
    return 0;
}
