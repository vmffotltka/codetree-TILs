#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, ans = 0; cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++) {
        int p; cin >> p;
        if (!st.empty() && st.top() > p) {
            ans += st.top() - p;
            while (!st.empty() && st.top() > p) st.pop();
        }
        st.push(p);
    }
    cout << ans + st.top();
}