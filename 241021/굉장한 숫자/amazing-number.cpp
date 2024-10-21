#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    cout << ((n & 1 && n % 3 == 0) || (n % 2 == 0 && n % 5 == 0) ? "true" : "false");
}