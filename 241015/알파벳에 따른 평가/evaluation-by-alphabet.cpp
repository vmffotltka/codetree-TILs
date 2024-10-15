#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    char c; cin >> c;
    if (c == 'S') cout << "Superior";
    else if (c == 'A') cout << "Excellent";
    else if (c == 'B') cout << "Good";
    else if (c == 'C') cout << "Usually";
    else if (c == 'D') cout << "Effort";
    else cout << "Failure";
}