#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll c;
        cin >> n >> c;
        vector<int> p(n + 1);
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> p[i];
        for (int i = 1; i <= n; i++) cin >> a[i];

        vector<char> vis(n + 1, 0);
        ll ans = 0;
        for (int i = 1; i <= n; i++) {
            if (vis[i]) continue;
            vector<ll> cyc;
            int x = i;
            while (!vis[x]) {
                vis[x] = 1;
                cyc.push_back(a[x]);
                x = p[x];
            }
            int L = cyc.size();
            if (L == 1) {
                ans += cyc[0];
                continue;
            }
            sort(cyc.rbegin(), cyc.rend());
            ll sum = 0;
            for (ll v : cyc) sum += v;
            ll full = sum - (ll)(L - 1) * c;   // fix whole cycle with L-1 swaps
            ll best = 0, run = 0;              // fix only some people, 1 swap each
            for (int k = 0; k <= L - 2; k++) {
                if (cyc[k] <= c) break;
                run += cyc[k] - c;
                best = run;
            }
            ans += max(best, full);
        }
        cout << ans << "\n";
    }
    return 0;
}
