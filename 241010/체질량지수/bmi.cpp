#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    double h, w, b; cin >> h >> w;
    b = (10000 * w) / (h * h);
    int ans = static_cast<int>(b);
    cout << ans << '\n';
    if (ans >= 25) cout << "Obesity";
}