#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll n, ans = 0; cin >> n;
    stack<ll> st;
    for (int i = 0; i < n; i++) {
        ll p; cin >> p;
        if (!st.empty() && st.top() > p) {
            ans += st.top() - p;
            while (!st.empty() && st.top() > p) st.pop();
        }
        st.push(p);
    }
    cout << ans + st.top();
}