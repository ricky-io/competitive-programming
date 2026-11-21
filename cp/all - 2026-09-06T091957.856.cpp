#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<ll> generateSums(const vector<ll>& a, int l, int r) {
    vector<ll> sums;

    int len = r - l;

    for (int mask = 0; mask < (1 << len); mask++) {
        ll sum = 0;

        for (int i = 0; i < len; i++) {
            if (mask & (1 << i)) {
                sum += a[l + i];
            }
        }

        sums.push_back(sum);
    }

    return sums;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll x;

    cin >> n >> x;

    vector<ll> a(n);

    for (ll &v : a) {
        cin >> v;
    }

    int mid = n / 2;

    // Generate all subset sums for both halves
    vector<ll> leftSums = generateSums(a, 0, mid);
    vector<ll> rightSums = generateSums(a, mid, n);

    // Sort right half so we can use binary search
    sort(rightSums.begin(), rightSums.end());

    ll answer = 0;

    for (ll leftSum : leftSums) {
        ll needed = x - leftSum;

        // Find first and last position of 'needed'
        auto lo = lower_bound(rightSums.begin(), rightSums.end(), needed);
        auto hi = upper_bound(rightSums.begin(), rightSums.end(), needed);

        // Number of occurrences of 'needed'
        answer += hi - lo;
    }

    cout << answer << '\n';

    return 0;
}