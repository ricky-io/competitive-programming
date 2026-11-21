#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(k + 1);
        for (int i = 1; i <= k; i++)
            cin >> a[i];

        vector<vector<int>> level(k + 2);

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            level[x].push_back(i);
        }

        vector<int> ans;
        bool ok = true;

        for (int i = k; i >= 1; i--) {
            if ((int)level[i].size() > a[i]) {
                ok = false;
                break;
            }

            for (int id : level[i]) {
                for (int j = i; j <= k; j++)
                    ans.push_back(id);
            }
        }

        if (!ok) {
            cout << -1 << '\n';
        } else {
            cout << ans.size() << '\n';
            for (int x : ans)
                cout << x << ' ';
            cout << '\n';
        }
    }
}