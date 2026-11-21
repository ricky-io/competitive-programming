#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        long long pref = 0;
        long long mn = (long long)4e18;

        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;

            pref += x;
            mn = min(mn, pref / i);

            cout << mn << (i == n ? '\n' : ' ');
        }
    }

    return 0;
}