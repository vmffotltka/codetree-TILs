#include <iostream>
using namespace std;

int main() {
    double a, b; cin >> a >> b;
    cout << (a >= 1 && b >= 1 ? "High" : (a >= 0.5 && b >= 0.5 ? "Middle" : "Low"));
}