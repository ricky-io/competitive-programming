#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string a;
        cin >> n >> a;

        vector<int> prefOnes(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefOnes[i + 1] = prefOnes[i] + (a[i] == '1' ? 1 : 0);
        }
        int totalOnes = prefOnes[n];

        int ans = INT_MAX;

        if (a[0] == '1') {
            // only split k = 0 is feasible (target = all ones)
            int k = 0;
            int onesInPrefix = prefOnes[k];         // 0
            int onesInSuffix = totalOnes - onesInPrefix;
            int zerosInSuffix = (n - k) - onesInSuffix;
            ans = onesInPrefix + zerosInSuffix;
        } else {
            // a[0] == '0'
            // find first '1' in the string
            int Q = -1;
            for (int i = 0; i < n; i++) {
                if (a[i] == '1') {
                    Q = i;
                    break;
                }
            }

            if (Q == -1) {
                // no ones at all, string is already all zeros
                ans = 0;
            } else {
                // try every feasible split k from Q to n
                for (int k = Q; k <= n; k++) {
                    int onesInPrefix = prefOnes[k];
                    int onesInSuffix = totalOnes - onesInPrefix;
                    int zerosInSuffix = (n - k) - onesInSuffix;
                    int cost = onesInPrefix + zerosInSuffix;
                    if (cost < ans) {
                        ans = cost;
                    }
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}