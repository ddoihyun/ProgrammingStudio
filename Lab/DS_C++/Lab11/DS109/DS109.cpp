#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    for (size_t i = 0; i < s.length(); ++i) {
        char c = s[i];
        if (!st.empty() && st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    }
    string ans;
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
    return 0;
}
