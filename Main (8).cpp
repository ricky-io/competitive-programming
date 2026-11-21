#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int mx = 1, cnt = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                cnt++;
                mx = max(mx, cnt);
            } else {
                cnt = 1;
            }
        }

        int ans = 0;

        while (mx < n) {
            int d = min(mx, n - mx);
            ans += 1 + d;
            mx += d;
        }

        cout << ans << '\n';
    }

    return 0;
}