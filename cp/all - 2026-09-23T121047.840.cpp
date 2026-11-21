#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using i128 = __int128_t;

bool check(ll M, vector<pair<ll,ll>>& a, ll total) {

    i128 q = 1;
    i128 extra = 0;

    ll p = M;

    for (auto [x, c] : a) {
        
        ll gap = p - x - 1;

        if (gap > 0) {
            q <<= gap;

            if (q > total)
                return false;
        }

        if (x == 0) {
            extra += c;
            break;
        }

        if (c >= q) {
            extra += c - q;
        }
        else {
            q += q - c;
        }

        if (q > total)
            return false;

        p = x;
    }

    return extra >= q;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {

        int n;
        cin >> n;

        vector<pair<ll,ll>> a;

        ll mx = 0;
        ll total = 0;

        for (int i = 0; i < n; i++) {

            ll x, y;
            cin >> x >> y;

            a.push_back({x, y});

            mx = max(mx, x);
            total += y;
        }

        sort(a.rbegin(), a.rend());

        if (a.back().first != 0)
            a.push_back({0, 0});

        ll low = mx;
        ll high = mx + 60;

        while (low < high) {

            ll mid = low + (high - low + 1) / 2;

            if (check(mid, a, total))
                low = mid;
            else
                high = mid - 1;
        }

        ll mexoramax = low;

        cout << mexoramax << '\n';
    }
}