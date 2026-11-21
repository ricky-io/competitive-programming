#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        for (int odd = 1; odd <= n; odd += 2) {

            vector<int> idx;
            vector<int> val;

            for (long long x = odd; x <= n; x *= 2) {
                idx.push_back(x);
                val.push_back(a[x]);
            }

            sort(val.begin(), val.end());

            for (int i = 0; i < idx.size(); i++)
                a[idx[i]] = val[i];
        }

        bool ok = true;

        for (int i = 1; i <= n; i++) {
            if (a[i] != i) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
}