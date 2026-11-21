#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long a, b, x;
        cin >> a >> b >> x;

        vector<pair<long long,long long>> A, B;

        long long cur = a, d = 0;
        while (true) {
            A.push_back({cur, d});
            if (cur == 0) break;
            cur /= x;
            d++;
        }

        cur = b;
        d = 0;

        while (true) {
            B.push_back({cur, d});
            if (cur == 0) break;
            cur /= x;
            d++;
        }

        long long ans = (long long)4e18;

        for (auto [ua, da] : A) {
            for (auto [ub, db] : B) {
                long long v = max(ua, ub);

                long long cost =
                    da + db +
                    (v - ua) +
                    (v - ub);

                ans = min(ans, cost);
            }
        }

        cout << ans << '\n';
    }
}