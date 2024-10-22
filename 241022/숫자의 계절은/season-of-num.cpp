#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
    	int n; cin >> n;
        	map<int, string> m;
            	m[0] = "Spring", m[1] = "Summer", m[2] = "Fall", m[3] = "Winter";
                	if (n < 3) n += 12;
                    	cout << m[(n - 3) / 3];
                        }