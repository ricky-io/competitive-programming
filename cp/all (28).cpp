#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n + 1);
    vector<int> parent(n + 1, -1);

    unordered_map<int, int> dp; 
    unordered_map<int, int> last; 

    int bestLen = 0;
    int bestEnd = -1;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];

        dp[a[i]] = dp[a[i] - 1] + 1;

        if (last.count(a[i] - 1))
            parent[i] = last[a[i] - 1];

        last[a[i]] = i;

        if (dp[a[i]] > bestLen) {
            bestLen = dp[a[i]];
            bestEnd = i;
        }
    }

    vector<int> ans;
    while (bestEnd != -1) {
        ans.push_back(bestEnd);
        bestEnd = parent[bestEnd];
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << "\n";
    for (int x : ans)
        cout << x << " ";
    cout << "\n";
}