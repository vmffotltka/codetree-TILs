#include <bits/stdc++.h>
using namespace std;

int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    cout << days[n];
}