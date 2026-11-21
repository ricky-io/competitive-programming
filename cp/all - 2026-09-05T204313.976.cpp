#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int ans = 0;

        // Each farm = k consecutive fields
        for (int start = 0; start < n; start += k) {
            bool hasFreeField = false;
            for (int i = start; i < start + k; i++) {
                if (s[i] == '0') {
                    hasFreeField = true;
                    break;
                }
            }
            if (!hasFreeField) {
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}