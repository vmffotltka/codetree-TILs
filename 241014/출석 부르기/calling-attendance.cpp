#include <bits/stdc++.h>
using namespace std;

string arr[4] = {"", "John", "Tom", "Paul"};

int main() {
    int n; cin >> n;
    if (n <= 3) cout << arr[n];
    else cout << "Vacancy";
    return 0;
}