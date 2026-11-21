#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector < vector < int >> g(n, vector < int > (m));
    for (auto & r: g)
        for (int & x: r) cin >> x;

    int sr, sc, dr, dc;
    cin >> sr >> sc >> dr >> dc;
    sr--;
    sc--;
    dr--;
    dc--;

    int k;
    cin >> k;
    vector < vector < bool >> blocked(n, vector < bool > (m, false));
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        blocked[a - 1][b - 1] = true;
    }

    const int INF = INT_MAX;
    vector < vector < int >> dist(n, vector < int > (m, INF));
    priority_queue < tuple < int, int, int > , vector < tuple < int, int, int >> , greater < >> pq;
    dist[sr][sc] = 0;
    pq.push({
        0,
        sr,
        sc
    });

    while (!pq.empty()) {
        auto[d, r, c] = pq.top();
        pq.pop();
        if (d > dist[r][c]) continue;
        if (r == dr && c == dc) break;

        // collect valid neighbours
        vector < pair < int, int >> nb;
        for (int dx = -1; dx <= 1; dx++)
            for (int dy = -1; dy <= 1; dy++) {
                if (!dx && !dy) continue;
                int nr = r + dx, nc = c + dy;
                if (nr < 0 || nc < 0 || nr >= n || nc >= m) continue;
                if (blocked[nr][nc]) continue;
                nb.push_back({
                    nr,
                    nc
                });
            }

        for (size_t i = 0; i < nb.size(); i++) {
            int M = g[r][c]; // current cell counts as a bound
            for (size_t j = 0; j < nb.size(); j++)
                if (j != i) M = max(M, g[nb[j].first][nb[j].second]);
            int v = g[nb[i].first][nb[i].second];
            int cost = max(0, M + 1 - v);
            int nd = d + cost;
            if (nd < dist[nb[i].first][nb[i].second]) {
                dist[nb[i].first][nb[i].second] = nd;
                pq.push({
                    nd,
                    nb[i].first,
                    nb[i].second
                });
            }
        }
    }

    cout << (dist[dr][dc] == INF ? -1 : dist[dr][dc]) << endl;
    return 0;
}