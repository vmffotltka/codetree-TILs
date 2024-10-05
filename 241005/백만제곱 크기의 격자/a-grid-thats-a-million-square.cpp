#include <bits/stdc++.h>
using namespace std;

int N;
int dy[8] = { 1, 1, 1, 0, -1, -1, -1, 0 };
int dx[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
map<int, map<int, int>> arr;

int countCover(int y, int x) {
    int cnt = 0;
    for (int i = 1; i < 8; i += 2) {
        int ny = y + dy[i], nx = x + dx[i];
        if (arr[ny][nx] == 1) cnt++;
    }
    return cnt;
}

int bfs(int y, int x) {
    deque<pair<int, int>> dq;
    dq.push_back({ y, x });
    arr[y][x] = 2;
    int ret = 0;
    while (!dq.empty()) {
        auto [cy, cx] = dq.front(); dq.pop_front();
        int cnt = countCover(cy, cx);
        if (!cnt) continue;
        ret += cnt;
        for (int i = 0; i < 8; i++) {
            int ny = cy + dy[i], nx = cx + dx[i];
            if (arr[ny][nx] == 0) {
                if (!(i & 1)) {
                    int nextY1 = cy + dy[(i + 1) % 8], nextX1 = cx + dx[(i + 1) % 8];
                    int nextY2 = cy + dy[(i + 7) % 8], nextX2 = cx + dx[(i + 7) % 8];
                    if (arr[nextY1][nextX1] == 1 && arr[nextY2][nextX2] == 1)
                        continue;
                }
                arr[ny][nx] = 2;
                dq.push_back({ ny, nx });
            }
        }
    }
    return ret;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> N;
    int mxY = -1, mxX = -1;
    for (int i = 0; i < N; i++) {
        int y, x; cin >> y >> x;
        arr[y][x] = 1;
        if (mxY < y) mxY = y, mxX = x;
        else if (mxY == y) mxX = max(mxX, x);
    }
    cout << bfs(mxY, mxX + 1);
}