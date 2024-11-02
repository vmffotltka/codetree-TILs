#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, n = 20; cin >> a >> b;
    cout << a / b << ".";
    a %= b;
    while (n--) {
        a *= 10;
        cout << a / b;
        a %= b;
    }
}