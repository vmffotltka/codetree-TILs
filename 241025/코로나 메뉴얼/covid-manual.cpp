#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        char c; int temp; cin >> c >> temp;
        if (c == 'Y' && temp >= 37) ans++;
    }
    cout << (ans > 1 ? "E" : "N");
}