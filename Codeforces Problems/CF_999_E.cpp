#include <bits/stdc++.h>
using namespace std;

const int MAXN = 5005;

int n, m, s;
vector<int> graph[MAXN];

bool reachable[MAXN];
bool visited[MAXN];

int cnt;

// Marks all vertices initially reachable from s
void dfsReach(int node) {
    reachable[node] = true;

    for (int nxt : graph[node]) {
        if (!reachable[nxt])
            dfsReach(nxt);
    }
}

// Counts how many currently unreachable vertices
// can be reached starting from 'node'
void dfsCount(int node) {
    visited[node] = true;
    cnt++;

    for (int nxt : graph[node]) {
        if (!visited[nxt] && !reachable[nxt])
            dfsCount(nxt);
    }
}

int main() {

    cin >> n >> m >> s;
    s--;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        graph[u].push_back(v);
    }

    // Step 1: Mark all cities already reachable from capital
    dfsReach(s);

    vector<pair<int, int>> order;

    // Step 2: For every unreachable city,
    // find how many unreachable cities it can cover.
    for (int i = 0; i < n; i++) {

        if (reachable[i])
            continue;

        memset(visited, false, sizeof(visited));
        cnt = 0;

        dfsCount(i);

        order.push_back({cnt, i});
    }

    // Step 3: Process cities in descending coverage
    sort(order.rbegin(), order.rend());

    int answer = 0;

    for (auto [cover, city] : order) {

        if (reachable[city])
            continue;

        answer++;

        dfsReach(city);
    }

    cout << answer << '\n';

    return 0;
}