#include <bits/stdc++.h>

using namespace std;

typedef set < pair < int, int >> Graph;

static pair < int, int > norm(int a, int b) {
    return a < b ? make_pair(a, b) : make_pair(b, a);
}

// Enumerate all simple cycles (length >= 3), in both directions.
void findCycles(const map < int, vector < int >> & adj, int start, int cur,
    vector < int > & path, set < int > & vis, vector < vector < int >> & cycles) {
    auto it = adj.find(cur);
    if (it == adj.end()) return;
    for (int w: it -> second) {
        if (w == start && path.size() >= 3) {
            cycles.push_back(path);
        } else if (w > start && !vis.count(w)) {
            vis.insert(w);
            path.push_back(w);
            findCycles(adj, start, w, path, vis, cycles);
            path.pop_back();
            vis.erase(w);
        }
    }
}

int main() {
    int E;
    cin >> E;

    Graph start, target;
    for (int i = 0; i < E; i++) {
        int a, b;
        cin >> a >> b;
        start.insert(norm(a, b));
    }
    for (int i = 0; i < E; i++) {
        int a, b;
        cin >> a >> b;
        target.insert(norm(a, b));
    }

    if (start == target) {
        cout << 0 << endl;
        return 0;
    }

    set < Graph > seen;
    queue < pair < Graph, int >> q;
    q.push({
        start,
        0
    });
    seen.insert(start);

    while (!q.empty()) {
        Graph g = q.front().first;
        int d = q.front().second;
        q.pop();

        // Build adjacency of the current graph
        map < int, vector < int >> adj;
        for (auto & e: g) {
            adj[e.first].push_back(e.second);
            adj[e.second].push_back(e.first);
        }

        // Find all simple cycles (each appears once per direction)
        vector < vector < int >> cycles;
        for (auto & kv: adj) {
            int s = kv.first;
            vector < int > path = {
                s
            };
            set < int > vis = {
                s
            };
            findCycles(adj, s, s, path, vis, cycles);
        }

        for (auto & cyc: cycles) {
            // rotate: cyc[i] -> cyc[i+1]
            map < int, int > p;
            int k = cyc.size();
            for (int i = 0; i < k; i++) p[cyc[i]] = cyc[(i + 1) % k];

            Graph ng;
            for (auto & e: g) {
                int a = p.count(e.first) ? p[e.first] : e.first;
                int b = p.count(e.second) ? p[e.second] : e.second;
                ng.insert(norm(a, b));
            }

            if (ng == target) {
                cout << d + 1 << endl;
                return 0;
            }
            if (!seen.count(ng)) {
                seen.insert(ng);
                q.push({
                    ng,
                    d + 1
                });
            }
        }
    }

    cout << -1 << endl; // target unreachable
    return 0;
}