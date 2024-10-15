#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a; cin >> a;
    if (a % 2 == 0) a /= 2;
    if (a & 1) a = (a + 1) / 2;
    cout << a;
}