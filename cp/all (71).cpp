#include <bits/stdc++.h>
using namespace std;

struct Cross {
    int x, y, sz;
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m, 0));
    for (int i = 0; i < n; i++)
        for(int j=0; j<m; j++)
            cin >> grid[i][j];

    vector<vector<int>> up(n, vector<int>(m, 0));
    vector<vector<int>> down(n, vector<int>(m, 0));
    vector<vector<int>> left(n, vector<int>(m, 0));
    vector<vector<int>> right(n, vector<int>(m, 0));

    // up
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '*') {
                up[i][j] = 1;
                if (i > 0) up[i][j] += up[i - 1][j];
            }
        }
    }

    // down
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '*') {
                down[i][j] = 1;
                if (i + 1 < n) down[i][j] += down[i + 1][j];
            }
        }
    }

    // left
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '*') {
                left[i][j] = 1;
                if (j > 0) left[i][j] += left[i][j - 1];
            }
        }
    }

    // right
    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j >= 0; j--) {
            if (grid[i][j] == '*') {
                right[i][j] = 1;
                if (j + 1 < m) right[i][j] += right[i][j + 1];
            }
        }
    }

    vector<Cross> ans;
    vector<vector<char>> covered(n, vector<char>(m, '.'));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '*') {
                int sz = min({up[i][j], down[i][j], left[i][j], right[i][j]}) - 1;

                if (sz > 0) {
                    ans.push_back({i, j, sz});

                    covered[i][j] = '*';

                    for (int k = 1; k <= sz; k++) {
                        if (i-k >= 0) covered[i-k][j] = '*';
                        if (i+k < n) covered[i+k][j] = '*';
                        if (j-k >= 0) covered[i][j-k] = '*';
                        if (j+k < m) covered[i][j+k] = '*';
                    }
                }
            }
        }
    }

    if (covered != grid) {
        cout << -1 << '\n';
        return 0;
    }

    cout << ans.size() << '\n';
    for (auto &c : ans) {
        cout << c.x + 1 << " " << c.y + 1 << " " << c.sz << '\n';
    }

    return 0;
}