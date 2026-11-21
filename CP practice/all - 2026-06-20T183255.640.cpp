#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct Fenwick {
    int n;
    vector<int> bit;

    Fenwick(int n) : n(n), bit(n + 1, 0) {}

    void update(int idx, int val) {
        idx++;
        while (idx <= n) {
            bit[idx] = max(bit[idx], val);
            idx += idx & -idx;
        }
    }

    int query(int idx) {
        idx++;
        int res = 0;
        while (idx > 0) {
            res = max(res, bit[idx]);
            idx -= idx & -idx;
        }
        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<pair<ll,ll>> seg(N);

    for (int i = 0; i < N; i++) {
        cin >> seg[i].first >> seg[i].second;
    }

    sort(seg.begin(), seg.end(),
         [](auto &a, auto &b) {
             return a.second < b.second;
         });

    vector<ll> rights;
    rights.reserve(N);

    for (auto &p : seg) rights.push_back(p.second);

    auto can = [&](ll D) -> bool {

        Fenwick fw(N);

        int bestOverall = 0;

        for (int i = 0; i < N; i++) {

            ll L = seg[i].first;

            int pos =
                upper_bound(
                    rights.begin(),
                    rights.end(),
                    L - D
                ) - rights.begin() - 1;

            int cur = 1;

            if (pos >= 0)
                cur = max(cur, fw.query(pos) + 1);

            fw.update(i, cur);

            bestOverall = max(bestOverall, cur);
        }

        return bestOverall >= K;
    };

    if (!can(0)) {
        cout << -1 << '\n';
        return 0;
    }

    ll lo = 0, hi = 1000000000LL;
    ll ans = 0;

    while (lo <= hi) {
        ll mid = (lo + hi) / 2;

        if (can(mid)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << ans << '\n';
    return 0;
}