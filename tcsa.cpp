#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    vector<string> g(N);

    for (int i = 0; i < N; i++) {
        g[i].resize(M);
        for (int j = 0; j < M; j++) {
            cin >> g[i][j];
        }
    }

    vector<int> horizontalRods;
    vector<int> verticalRods;

    for (int r = 0; r < N; r++) {
        bool ok = true;

        for (int c = 0; c < M; c++) {
            if (g[r][c] == '.') {
                ok = false;
                break;
            }
        }

        if (ok)
            horizontalRods.push_back(r);
    }

    for (int c = 0; c < M; c++) {
        bool ok = true;

        for (int r = 0; r < N; r++) {
            if (g[r][c] == '.') {
                ok = false;
                break;
            }
        }

        if (ok)
            verticalRods.push_back(c);
    }

    vector<vector<bool>> crossing(N, vector<bool>(M, false));

    // Vertical rods
    for (int c : verticalRods) {
        for (int r = 0; r < N; r++) {

            if (c > 0 && c + 1 < M &&
                g[r][c - 1] == 'C' &&
                g[r][c + 1] == 'C') {

                crossing[r][c] = true;
            }
        }
    }

    // Horizontal rods
    for (int r : horizontalRods) {
        for (int c = 0; c < M; c++) {

            if (r > 0 && r + 1 < N &&
                g[r - 1][c] == 'C' &&
                g[r + 1][c] == 'C') {

                crossing[r][c] = true;
            }
        }
    }


    vector<vector<bool>> cable(N, vector<bool>(M, false));

    for (int r = 0; r < N; r++) {
        for (int c = 0; c < M; c++) {
            if (g[r][c] == 'C' || crossing[r][c])
                cable[r][c] = true;
        }
    }

    int dr[] = {-1, 0, 1, 0};
    int dc[] = {0, 1, 0, -1};

    vector<vector<int>> adj(N * M);

    for (int r = 0; r < N; r++) {
        for (int c = 0; c < M; c++) {

            if (!cable[r][c])
                continue;

            int id = r * M + c;

            for (int d = 0; d < 4; d++) {
                int nr = r + dr[d];
                int nc = c + dc[d];

                if (nr >= 0 && nr < N &&
                    nc >= 0 && nc < M &&
                    cable[nr][nc]) {

                    adj[id].push_back(nr * M + nc);
                }
            }
        }
    }


    int start = -1;

    for (int r = 0; r < N && start == -1; r++) {
        for (int c = 0; c < M; c++) {

            int id = r * M + c;

            if (cable[r][c] && adj[id].size() == 1) {
                start = id;
                break;
            }
        }
    }


    vector<int> horizontalSum(N, 0);
    vector<int> verticalSum(M, 0);

    vector<bool> visited(N * M, false);

    int cur = start;
    int prev = -1;

    visited[cur] = true;

    while (true) {

        int r = cur / M;
        int c = cur % M;

        int nxt = -1;

        for (int nb : adj[cur]) {
            if (nb != prev && !visited[nb]) {
                nxt = nb;
                break;
            }
        }

        // Process a crossing.
        if (crossing[r][c] && prev != -1) {

            int pr = prev / M;
            int pc = prev % M;

            int sign = (g[r][c] == 'C') ? 1 : -1;
            if (pr == r) {

                int direction = (pc < c) ? 1 : -1;

                verticalSum[c] += direction * sign;
            }

            else {

                int direction = (pr < r) ? 1 : -1;

                horizontalSum[r] += direction * sign;
            }
        }

        if (nxt == -1)
            break;

        prev = cur;
        cur = nxt;
        visited[cur] = true;
    }


    long long answer = 0;

    for (int r : horizontalRods) {
        answer += abs(horizontalSum[r]) / 2;
    }

    for (int c : verticalRods) {
        answer += abs(verticalSum[c]) / 2;
    }

    cout << answer << '\n';

    return 0;
}