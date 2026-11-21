#include <bits/stdc++.h>
#define ll long long
#define pp pair<int, int>

using namespace std;

vector<list<pp>> gr;

void add_edge(int u, int v, int wt, bool bidir = true) {
    gr[u].push_back({v, wt});
    if (bidir) {
        gr[v].push_back({u, wt});
    }
}

ll prims(int src, int n) {

    // {weight, node}
    priority_queue<pp, vector<pp>, greater<pp>> pq;

    vector<bool> vis(n + 1, false);
    vector<int> parent(n + 1, -1);
    vector<int> key(n + 1, INT_MAX);

    key[src] = 0;
    pq.push({0, src});

    ll result = 0;

    while (!pq.empty()) {

        auto curr = pq.top();
        pq.pop();

        int wt = curr.first;
        int node = curr.second;

        if (vis[node])
            continue;

        vis[node] = true;
        result += wt;

        for (auto neighbour : gr[node]) {

            int next = neighbour.first;
            int edgeWt = neighbour.second;

            if (!vis[next] && edgeWt < key[next]) {

                key[next] = edgeWt;
                parent[next] = node;

                pq.push({edgeWt, next});
            }
        }
    }

    cout << "\nEdges in MST:\n";
    for (int i = 1; i <= n; i++) {
        if (parent[i] != -1) {
            cout << parent[i] << " - " << i
                 << " (wt = " << key[i] << ")\n";
        }
    }

    return result;
}

int main() {

    int n, m;
    cin >> n >> m;

    gr.resize(n + 1);

    while (m--) {
        int u, v, wt;
        cin >> u >> v >> wt;
        add_edge(u, v, wt);
    }

    int src;
    cin >> src;

    cout << "Minimum Cost of MST = " << prims(src, n) << endl;

    return 0;
}