#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // sort, find

using namespace std;

bool cmp(const string &a, const string &b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    return a < b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<string> words;
    words.reserve(N);

    for (int i = 0; i < N; ++i) {
        string s;
        cin >> s;

        if (find(words.begin(), words.end(), s) == words.end()) {
            words.push_back(s);
        }
    }

    sort(words.begin(), words.end(), cmp);

    for (size_t i = 0; i < words.size(); ++i) {
        cout << words[i] << '\n';
    }

    return 0;
}