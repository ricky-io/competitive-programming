#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n <= 2) {
        cout << 0 << endl;
        return 0;
    }

    const int INF = 1e9;
    int ans = INF;

    vector<int> change = {-1, 0, 1};

    for (int x : change) {
        for (int y : change) {

            long long first = a[0] + x;
            long long second = a[1] + y;
            long long d = second - first;

            int ops = abs(x) + abs(y);
            bool ok = true;

            for (int i = 2; i < n; i++) {

                long long expected = first + 1LL * i * d;

                if (abs(a[i] - expected) > 1) {
                    ok = false;
                    break;
                }

                if (abs(a[i] - expected) == 1)
                    ops++;
            }

            if (ok)
                ans = min(ans, ops);
        }
    }

    if (ans == INF)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}