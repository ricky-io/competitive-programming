#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool ok = true;

        for (int i = 0; i < n - 1; i++) {
            long long need = max(1LL, (i == 0 ? 1LL : a[i - 1] + 1));

            if (a[i] < need) {
                ok = false;
                break;
            }

            long long extra = a[i] - need;
            a[i] = need;
            a[i + 1] += extra;
        }

        if (ok) {
            if (n > 1 && a[n - 1] <= a[n - 2])
                ok = false;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
}