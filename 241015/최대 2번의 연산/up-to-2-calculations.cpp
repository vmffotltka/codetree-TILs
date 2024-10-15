#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a; cin >> a;
    cout << (a & 1 ? (a + 1) / 2 : a / 2);
}