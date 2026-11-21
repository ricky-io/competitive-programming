#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    const int INF = 1e9;

    // monsterTime[i][j] = earliest time a monster reaches cell
    vector<vector<int>> monsterTime(
        n, vector<int>(m, INF)
    );

    queue<pair<int, int>> q;

    pair<int, int> start;

    // Multi-source BFS: put ALL monsters into queue
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (grid[i][j] == 'M') {
                q.push({i, j});
                monsterTime[i][j] = 0;
            }

            if (grid[i][j] == 'A') {
                start = {i, j};
            }
        }
    }

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    char dir[] = {'U', 'D', 'L', 'R'};

    // --------------------------------
    // BFS 1: Monsters
    // --------------------------------

    while (!q.empty()) {

        auto [x, y] = q.front();
        q.pop();

        for (int k = 0; k < 4; k++) {

            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx < 0 || ny < 0 ||
                nx >= n || ny >= m)
                continue;

            if (grid[nx][ny] == '#')
                continue;

            if (monsterTime[nx][ny] != INF)
                continue;

            monsterTime[nx][ny] =
                monsterTime[x][y] + 1;

            q.push({nx, ny});
        }
    }

    // --------------------------------
    // BFS 2: A
    // --------------------------------

    vector<vector<int>> playerTime(
        n, vector<int>(m, -1)
    );

    vector<vector<pair<int, int>>> parent(
        n,
        vector<pair<int, int>>(m, {-1, -1})
    );

    vector<vector<char>> move(
        n,
        vector<char>(m)
    );

    queue<pair<int, int>> aq;

    aq.push(start);
    playerTime[start.first][start.second] = 0;

    while (!aq.empty()) {

        auto [x, y] = aq.front();
        aq.pop();

        // Check whether A escaped
        if (x == 0 || x == n - 1 ||
            y == 0 || y == m - 1) {

            string path;

            pair<int, int> cur = {x, y};

            while (cur != start) {
                path.push_back(
                    move[cur.first][cur.second]
                );

                cur = parent[cur.first][cur.second];
            }

            reverse(path.begin(), path.end());

            cout << "YES\n";
            cout << path.size() << '\n';
            cout << path << '\n';

            return 0;
        }

        for (int k = 0; k < 4; k++) {

            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx < 0 || ny < 0 ||
                nx >= n || ny >= m)
                continue;

            if (grid[nx][ny] == '#')
                continue;

            if (playerTime[nx][ny] != -1)
                continue;

            int newTime = playerTime[x][y] + 1;

            // A must arrive BEFORE the monster
            if (newTime >= monsterTime[nx][ny])
                continue;

            playerTime[nx][ny] = newTime;

            parent[nx][ny] = {x, y};
            move[nx][ny] = dir[k];

            aq.push({nx, ny});
        }
    }

    cout << "NO\n";

    return 0;
}