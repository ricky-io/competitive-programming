#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, K;
    cin >> H >> W >> K;

    vector<string> S(H);
    for (auto &row : S) {
        cin >> row;
    }

    // rowBomb[i] = does row i contain a bomb?
    // colBomb[j] = does column j contain a bomb?
    vector<bool> rowBomb(H, false);
    vector<bool> colBomb(W, false);

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '#') {
                rowBomb[i] = true;
                colBomb[j] = true;
            }
        }
    }

    vector<vector<int>> dist(H, vector<int>(W, -1));

    queue<pair<int, int>> q;

    // Add all safe cells as BFS sources
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {

            if (S[i][j] == '.' &&
                !rowBomb[i] &&
                !colBomb[j]) {

                dist[i][j] = 0;
                q.push({i, j});
            }
        }
    }

    int di[] = {-1, 1, 0, 0};
    int dj[] = {0, 0, -1, 1};

    // Multi-source BFS
    while (!q.empty()) {
        auto [i, j] = q.front();
        q.pop();

        for (int d = 0; d < 4; d++) {
            int ni = i + di[d];
            int nj = j + dj[d];

            if (ni < 0 || ni >= H || nj < 0 || nj >= W)
                continue;

            if (S[ni][nj] == '#')
                continue;

            if (dist[ni][nj] != -1)
                continue;

            dist[ni][nj] = dist[i][j] + 1;
            q.push({ni, nj});
        }
    }

    // Count cells that can reach a safe cell within K moves
    int ans = 0;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {

            if (S[i][j] == '.' && dist[i][j] != -1 &&
                dist[i][j] <= K) {
                ans++;
            }
        }
    }

    cout << ans << '\n';
}