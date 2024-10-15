#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    if (n >= 3000) cout << "book";
    else if (n >= 1000) cout << "mask";
    else cout << "pen";
}