#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n + 1);
    vector<int> dp(n + 1);
    vector<int> par(n + 1, -1);

    map<int, int> pos;

    int bestLen = 0;
    int bestEnd = -1;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];

        if (pos.count(a[i] - 1)) {
            dp[i] = dp[pos[a[i] - 1]] + 1;
            par[i] = pos[a[i] - 1];
        } else {
            dp[i] = 1;
        }

        pos[a[i]] = i;

        if (dp[i] > bestLen) {
            bestLen = dp[i];
            bestEnd = i;
        }
    }

    cout << bestLen << "\n";

    vector<int> ans;

    while (bestEnd != -1) {
        ans.push_back(bestEnd);
        bestEnd = par[bestEnd];
    }

    reverse(ans.begin(), ans.end());

    for (int x : ans)
        cout << x << " ";
}