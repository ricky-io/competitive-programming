#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, K;
    cin >> H >> W >> K;

    vector<string> s(H);
    for (auto &row : s) {
        cin >> row;
    }
    vector<bool> rowBomb(H, false);
    vector<bool> colBomb(W, false);

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (s[i][j] == '#') {
                rowBomb[i] = true;
                colBomb[j] = true;
            }
        }
    }

    vector<vector<int>> dist(H, vector<int>(W, -1));

    queue<pair<int, int>> q;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {

            if (s[i][j] == '.' &&
                !rowBomb[i] &&
                !colBomb[j]) {

                dist[i][j] = 0;
                q.push({i, j});
            }
        }
    }

    int di[] = {-1, 1, 0, 0};
    int dj[] = {0, 0, -1, 1};

    while (!q.empty()) {
        auto [i, j] = q.front();
        q.pop();

        for (int d = 0; d < 4; d++) {
            int ni = i + di[d];
            int nj = j + dj[d];

            if (ni < 0 || ni >= H || nj < 0 || nj >= W)
                continue;

            if (s[ni][nj] == '#')
                continue;

            if (dist[ni][nj] != -1)
                continue;

            dist[ni][nj] = dist[i][j] + 1;
            q.push({ni, nj});
        }
    }

    int ans = 0;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {

            if (s[i][j] == '.' && dist[i][j] != -1 &&
                dist[i][j] <= K) {
                ans++;
            }
        }
    }

    cout << ans << endl;
}