#include <iostream>
using namespace std;

int main() {
    cout << fixed; cout.precision(2);
    int a, b; cin >> a >> b;
    double add = a + b, sub = a - b;
    cout << add / sub;
    return 0;
}