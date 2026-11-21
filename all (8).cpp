#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> even;
        long long mxOdd = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            if (x % 2 == 0)
                even.push_back(x);
            else
                mxOdd = max(mxOdd, x);
        }

        if (even.empty() || even.size() == n) {
            cout << 0 << '\n';
            continue;
        }

        sort(even.begin(), even.end());

        int ans = even.size();

        for (long long x : even) {
            if (mxOdd > x) {
                mxOdd += x;
            } else {
                ans++;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}