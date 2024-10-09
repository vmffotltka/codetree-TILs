#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b; cin >> a >> b;
    cout << a + b << " " << (a + b) / 2 << "." << ((a + b) & 1 ? 5 : 0);
}