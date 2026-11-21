#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<ll> x(m);
        for (auto &v : x) cin >> v;
        sort(x.begin(), x.end());

        ll A = x[0] - 1;        // must reach left at least A
        ll B = n - x[m - 1];    // must reach right at least B
        ll G = 0;               // largest uncovered gap between neighbours
        for (int i = 0; i + 1 < m; i++) G = max(G, x[i + 1] - x[i] - 1);

        ll S = max(A + B, G);   // L + R
        ll ans = S + min(min(S - B, B), min(A, S - A));
        cout << ans << "\n";
    }
    return 0;
}
