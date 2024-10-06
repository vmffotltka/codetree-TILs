#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
    int g, s; cin >> g >> s;
    g += 8, s *= 3;
    cout << g << '\n' << s << '\n' << g * s;
}