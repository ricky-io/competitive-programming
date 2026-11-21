#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        map<pair<long long, long long>, long long> cnt;

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;

            long long remX = a % x;
            long long remY = a % y;

            long long needX = (x - remX) % x;
            long long needY = remY;

            ans += cnt[{needX, needY}];

            cnt[{remX, remY}]++;
        }

        cout << ans << '\n';
    }

    return 0;
}
