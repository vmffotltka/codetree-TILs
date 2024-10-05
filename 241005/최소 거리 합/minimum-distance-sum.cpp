#include <bits/stdc++.h>
using namespace std;

const int MAX = 100'000'000;
int N, K;
map<int, int> arr;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> N >> K;
    deque<int> dq, tmp;
    for (int i = 0; i < N; i++) {
        int p; cin >> p;
        arr[p] = 1;
        dq.push_back(p);
    }
    int ans = 0, dist = 1;
    while (!dq.empty()) {
        int x = dq.front(); dq.pop_front();
        if (K && x != MAX && !arr[x + 1]) {
            tmp.push_back(x + 1);
            arr[x + 1] = 1, ans += dist, K--;
        }
        if (K && x != -MAX && !arr[x - 1]) {
            tmp.push_back(x - 1);
            arr[x - 1] = 1, ans += dist, K--;
        }
        if (dq.empty()) {
            dist++;
            swap(dq, tmp);
        }
        if (!K) break;
    }
    cout << ans;
}