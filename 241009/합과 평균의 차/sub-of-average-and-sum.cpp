#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, c; cin >> a >> b >> c;
    int ans1 = a + b + c, ans2 = ans1 / 3, ans3 = ans1 - ans2;
    cout << ans1 << '\n' << ans2 << '\n' << ans3;
}