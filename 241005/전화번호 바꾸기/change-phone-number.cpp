#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int cnt = 0;
    string arr[3] = {}, s; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') { cnt++; continue; }
        arr[cnt] += s[i];
    }
    cout << arr[0] << "-" << arr[2] << "-" << arr[1];
}