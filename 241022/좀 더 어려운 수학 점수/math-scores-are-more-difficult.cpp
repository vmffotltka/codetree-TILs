#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
    	int a, b, c, d; cin >> a >> b >> c >> d;
        	cout << (a != c ? (a > c ? 'A' : 'B') : (b > d ? 'A' : 'B'));
            }