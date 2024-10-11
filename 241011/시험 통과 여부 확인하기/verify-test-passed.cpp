#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    if (n >= 80) cout << "pass";
    else cout << 80 - n << " more score";
}