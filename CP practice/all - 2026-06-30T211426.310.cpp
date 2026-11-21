#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);

        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        long long cur = 0;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            cur += a[i] - b[i];
            if (cur < 0) ok = false;
        }

        if (cur != 0) ok = false;

        cout << (ok ? "YES" : "NO") << '\n';
    }
}