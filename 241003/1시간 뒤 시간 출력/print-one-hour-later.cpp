#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int h = 0, m = 0; string s; cin >> s;
    bool tri = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ':') { tri = true; continue; }
        if (!tri) h *= 10, h += s[i] - '0';
        else m *= 10, m += s[i] - '0';
    }
    cout << h + 1 << ":" << m;
}