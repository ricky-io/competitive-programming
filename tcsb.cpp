#include <bits/stdc++.h>

using namespace std;

struct State {
    int r, c, dir, dist;
};

int main() {

    int M, N;
    cin >> M >> N;

    vector < string > grid(M);
    for (auto & row: grid)
        cin >> row;

    int L;
    cin >> L;

    vector < pair < int, int >> src, dest;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == 'I')
                src.push_back({
                    i,
                    j
                });
            else if (grid[i][j] == 'L')
                dest.push_back({
                    i,
                    j
                });
        }
    }

    auto getState = [ & ](vector < pair < int, int >> cells) {
        int minR = M, minC = N;
        int maxR = -1, maxC = -1;

        for (auto[r, c]: cells) {
            minR = min(minR, r);
            minC = min(minC, c);
            maxR = max(maxR, r);
            maxC = max(maxC, c);
        }

        int dir = (minR == maxR) ? 0 : 1;

        return State {
            minR,
            minC,
            dir,
            0
        };
    };

    State start = getState(src);

    State target = getState(dest);

    vector < vector < array < int, 2 >>> dist(
        M, vector < array < int, 2 >> (N, {
            -1,
            -1
        })
    );

    queue < State > q;

    dist[start.r][start.c][start.dir] = 0;
    q.push(start);
    auto valid = [ & ](int r, int c, int dir) -> bool {

        if (dir == 0) {
            // Horizontal
            if (r < 0 || r >= M ||
                c < 0 || c + L - 1 >= N)
                return false;

            for (int j = 0; j < L; j++) {
                if (grid[r][c + j] == 'B')
                    return false;
            }
        }
        else {
            // Vertical
            if (r < 0 || r + L - 1 >= M ||
                c < 0 || c >= N)
                return false;

            for (int i = 0; i < L; i++) {
                if (grid[r + i][c] == 'B')
                    return false;
            }
        }

        return true;
    };

    auto canRotate = [ & ](int r, int c) -> bool {

        if (r < 0 || c < 0 ||
            r + L - 1 >= M ||
            c + L - 1 >= N)
            return false;

        for (int i = r; i < r + L; i++) {
            for (int j = c; j < c + L; j++) {
                if (grid[i][j] == 'B')
                    return false;
            }
        }

        return true;
    };

    while (!q.empty()) {

        State cur = q.front();
        q.pop();

        int r = cur.r;
        int c = cur.c;
        int dir = cur.dir;

        int d = dist[r][c][dir];

        // Destination reached
        if (r == target.r &&
            c == target.c &&
            dir == target.dir) {

            cout << d << '\n';
            return 0;
        }


        int dr[] = {
            -1,
            1,
            0,
            0
        };
        int dc[] = {
            0,
            0,
            -1,
            1
        };

        for (int k = 0; k < 4; k++) {

            int nr = r + dr[k];
            int nc = c + dc[k];

            if (!valid(nr, nc, dir))
                continue;

            if (dist[nr][nc][dir] != -1)
                continue;

            dist[nr][nc][dir] = d + 1;

            q.push({
                nr,
                nc,
                dir,
                d + 1
            });
        }


        if (canRotate(r, c)) {

            int ndir = 1 - dir;

            int nr = r;
            int nc = c;

            if (dist[nr][nc][ndir] == -1) {

                dist[nr][nc][ndir] = d + 1;

                q.push({
                    nr,
                    nc,
                    ndir,
                    d + 1
                });
            }
        }
    }

    cout << "Impossible\n";

    return 0;
}