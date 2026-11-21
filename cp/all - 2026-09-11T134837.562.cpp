#include <bits/stdc++.h>
using namespace std;

int main() {

    long long k, n;
    cin >> n >> k;

    long long x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<long long> v(n);

    v[0] = x;

    for (int i = 1; i < n; i++) {
        v[i] = (v[i - 1] * a + b) % c;
    }

    long long result = 0;
    long long ans = 0;

    vector<int> cnt(32);

    // First window
    for (int i = 0; i < k; i++) {

        long long x = v[i];

        while (x) {
            int bit = __builtin_ctzll(x);

            cnt[bit]++;
            result |= (1LL << bit);

            x &= (x - 1);
        }
    }

    ans = result;

    // Sliding window
    for (int i = 0, j = k; j < n; i++, j++) {

        // Remove v[i]
        long long x = v[i];

        while (x) {
            int bit = __builtin_ctzll(x);

            cnt[bit]--;

            if (cnt[bit] == 0) {
                result &= ~(1LL << bit);
            }

            x &= (x - 1);
        }

        // Add v[j]
        x = v[j];

        while (x) {
            int bit = __builtin_ctzll(x);

            cnt[bit]++;
            result |= (1LL << bit);

            x &= (x - 1);
        }

        ans ^= result;
    }

    cout << ans << '\n';
}