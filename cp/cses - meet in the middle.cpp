#include <bits/stdc++.h>
using namespace std;

// CSES :: Advanced Techniques :: Meet in the Middle :

using ll = long long;

void generate(const vector<ll>& a, int idx, int end, ll sum, vector<ll>& sums) {
    if (idx == end) {
        sums.push_back(sum);
        return;
    }

    // Don't take a[idx]
    generate(a, idx + 1, end, sum, sums);

    // Take a[idx]
    generate(a, idx + 1, end,
             sum + a[idx], sums);
}

int main() {
    int n;
    ll x;

    cin >> n >> x;

    vector<ll> a(n);

    for (auto& v : a)
        cin >> v;

    int mid = n / 2;

    vector<ll> leftSums;
    vector<ll> rightSums;

    generate(a, 0, mid, 0, leftSums);
    generate(a, mid, n, 0, rightSums);

    sort(rightSums.begin(), rightSums.end());

    ll ans = 0;

    for (ll left : leftSums) {

        ll needed = x - left;

        auto lo = lower_bound(
            rightSums.begin(),
            rightSums.end(),
            needed
        );

        auto hi = upper_bound(
            rightSums.begin(),
            rightSums.end(),
            needed
        );

        ans += hi - lo;
    }

    cout << ans << endl;

    return 0;
}