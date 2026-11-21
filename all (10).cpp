#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> a(n);
        for (auto &x : a) cin >> x;

        ll M = *max_element(a.begin(), a.end());

        ll L = M;
        ll R = (1LL << 62);

        for (ll x : a) {
            ll period = 2 * k;

            ll d = (L - x) % period;
            if (d < 0) d += period;

            ll start, end;

            if (d < k) {
                // Currently ON.
                start = L;
                end = L + (k - d);
            } else {
                // Currently OFF.
                // Move to the next ON interval.
                start = L + (period - d);
                end = start + k;
            }

            L = max(L, start);
            R = min(R, end);

            if (L >= R) {
                break;
            }
        }

        if (L >= R)
            cout << -1 << '\n';
        else
            cout << L << '\n';
    }

    return 0;
}