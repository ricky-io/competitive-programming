#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long N, K;
        cin >> N >> K;

        long long m = 2 * N;
        long long q = K / m;
        long long r = K % m;

        long long ans =
            q * (2 * K + 1 - m) - m * q * (q - 1);

        if (r >= 1) ans += K - q * m;

        cout << ans << '\n';
    }

    return 0;
}