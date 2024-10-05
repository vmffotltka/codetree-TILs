#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N;
int dy[4] = { 0, 0, 1, -1 };
int dx[4] = { 1, -1, 0, 0 };
map<int, map<int, int>> arr;

int bfs(int y, int x) {
    deque<pair<int, int>> dq;
    dq.push_back({ y, x });
    arr[y][x] = 2;
    int mxY = y, mnY = y, mxX = x, mnX = x;
    while (!dq.empty()) {
        auto [cy, cx] = dq.front(); dq.pop_front();
        for (int i = 0; i < 4; i++) {
            int ny = cy + dy[i], nx = cx + dx[i];
            if (arr[ny][nx] == 1) {
                dq.push_back({ ny, nx });
                arr[ny][nx] = 2;
                mxY = max(mxY, ny), mnY = min(mnY, ny);
                mxX = max(mxX, nx), mnX = min(mnX, nx);
            }
        }
    }
    return (mxX - mnX + mxY - mnY + 2) * 2;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> N;
    int sy = -1, sx = -1;
    for (int i = 0; i < N; i++) {
        int y, x; cin >> y >> x;
        arr[y][x] = 1;
        if (sy == -1) sy = y, sx = x;
    }
    int ans = 0;
    for (auto &[y, indexes] : arr) {
        for (auto &[x, val] : indexes) {
            if (val == 1) ans += bfs(y, x);
        }
    }
    cout << ans;
}