#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N, arr[1000], dp[1000];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];
    for (int i = 0; i < N; i++) {
        dp[i] = arr[i];
        for (int j = i - 1; j >= 0; j--) {
            dp[i] = max(dp[i], dp[j] + arr[i - j - 1]);
        }
    }
    cout << dp[N - 1];
}