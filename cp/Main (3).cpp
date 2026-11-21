#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> p(n + 1), pos(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        vector<int> comp(n + 1, -1);

        int id = 0;

        for (int i = 1; i <= n; i++) {
            if (comp[i] != -1) continue;

            queue<int> q;
            q.push(i);
            comp[i] = id;

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                vector<int> nxt;

                if (u + x <= n) nxt.push_back(u + x);
                if (u - x >= 1) nxt.push_back(u - x);
                if (u + y <= n) nxt.push_back(u + y);
                if (u - y >= 1) nxt.push_back(u - y);

                for (int v : nxt) {
                    if (comp[v] == -1) {
                        comp[v] = id;
                        q.push(v);
                    }
                }
            }

            id++;
        }

        bool ok = true;

        for (int val = 1; val <= n; val++) {
            if (comp[pos[val]] != comp[val]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
}