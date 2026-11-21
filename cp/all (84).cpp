#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<pair<int64,int>> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i].first;
            b[i].second = i;
        }

        sort(b.begin(), b.end());

        if (b[0].first != 0) {
            cout << -1 << '\n';
            continue;
        }

        vector<int64> ans(n);
        int64 prefix = 0;  
        int64 lastValue = 0; 
        bool ok = true;

        int i = 0;
        while (i < n && ok) {
            int j = i;
            while (j < n && b[j].first == b[i].first) j++;

            int cnt = j - i;
            int64 value;

            if (j == n) {
                // last group
                value = lastValue + 1;
            } else {
                int64 diff = b[j].first - prefix;
                if (diff <= 0 || diff % cnt != 0) {
                    ok = false;
                    break;
                }

                value = diff / cnt;
                if (value <= lastValue) {
                    ok = false;
                    break;
                }
            }

            for (int k = i; k < j; k++)
                ans[b[k].second] = value;

            prefix += value * 1LL * cnt;
            lastValue = value;
            i = j;
        }

        if (!ok) {
            cout << -1 << '\n';
        } else {
            for (int64 x : ans) cout << x << " ";
            cout << '\n';
        }
    }
}