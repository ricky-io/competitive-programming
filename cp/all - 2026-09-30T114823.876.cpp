#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll lowZero(ll x, ll n) {
    for (ll p = 1; p <= n; p <<= 1) {
        if ((x & p) == 0) return p;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q;
    cin >> n >> q;

    while (q--) {
        ll s, t;
        cin >> s >> t;

        if (s == t) { cout << 0 << '\n'; continue; }
        if ((s & t) == 0) { cout << s + t << '\n'; continue; }

        const ll INF = LLONG_MAX;
        ll best = INF;

        // route s -> x -> t
        ll x = lowZero(s | t, n);
        if (x != -1) best = min(best, s + t + 2 * x);

        // route s -> a -> b -> t
        ll a = lowZero(s, n), b = lowZero(t, n);
        if (a != -1 && b != -1) {
            if (a != b) best = min(best, s + t + 2 * (a + b));
            else best = min(best, s + t + 2 * a); // a == b: common neighbour
        }

        cout << (best == INF ? -1 : best) << '\n';
    }
    return 0;
}