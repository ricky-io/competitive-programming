#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;

    vector<ll> a(n);

    vector<vector<int>> pos(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i] % m].push_back(i);
    }

    int need = n / m;
    ll ans = 0;

    vector<int> extra;

    // traverse twice to handle wrap-around
    for (int i = 0; i < 2 * m; i++) {

        int r = i % m;

        // remove extra elements
        while ((int)pos[r].size() > need) {
            extra.push_back(pos[r].back());
            pos[r].pop_back();
        }

        // fill deficit
        while ((int)pos[r].size() < need && !extra.empty()) {

            int idx = extra.back();
            extra.pop_back();

            int oldRem = a[idx] % m;

            ll add = (r - oldRem + m) % m;

            a[idx] += add;
            ans += add;

            pos[r].push_back(idx);
        }
    }

    cout << ans << "\n";

    for (ll x : a)
        cout << x << " ";
    cout << "\n";

    return 0;
}