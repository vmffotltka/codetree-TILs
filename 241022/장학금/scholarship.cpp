#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
    	int mid, final; cin >> mid >> final;
        	if (mid >= 90) {
            		if (final >= 95) cout << 100000;
                    		else if (final >= 90) cout << 50000;
                            		else cout << 0;
                                    	}
                                        	else {
                                            		cout << 0;
                                                    	}
                                                        }