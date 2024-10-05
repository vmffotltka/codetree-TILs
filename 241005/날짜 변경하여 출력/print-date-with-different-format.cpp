#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int arr[3] = {}, cnt = 0;
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '.') { cnt++; continue; }
        arr[cnt] *= 10, arr[cnt] += s[i] - '0';
    }
    cout << arr[1] << "-" << arr[2] << "-" << arr[0];
}