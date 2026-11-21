#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<long long, int>> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }

        sort(a.begin(), a.end());

        vector<long long> pref(n);

        pref[0] = a[0].first;

        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + a[i].first;
        }

        vector<int> ans(n);

        int j = n - 1;

        for (int i = n - 1; i >= 0; i--) {

            if (i == n - 1) {
                ans[a[i].second] = n - 1;
            }
            else if (pref[i] >= a[i + 1].first) {
                ans[a[i].second] = ans[a[i + 1].second];
            }
            else {
                ans[a[i].second] = i;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }

        cout << endl;
    }
}
