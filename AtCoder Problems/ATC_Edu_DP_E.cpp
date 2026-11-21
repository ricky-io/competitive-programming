#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int main() {

    int n, W;
    cin >> n >> W;

    vector<int> w(n + 1), v(n + 1);

    int sumValue = 0;

    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
        sumValue += v[i];
    }

    vector<vector<long long>> dp(
        n + 1,
        vector<long long>(sumValue + 1, INF)
    );

    // Base case
    dp[0][0] = 0;

    for (int i = 1; i <= n; i++) {

        for (int value = 0; value <= sumValue; value++) {

            // Option 1 : Don't take current item
            dp[i][value] = dp[i - 1][value];

            // Option 2 : Take current item
            if (value >= v[i]) {
                dp[i][value] = min(
                    dp[i][value],
                    dp[i - 1][value - v[i]] + w[i]
                );
            }
        }
    }

    int ans = 0;

    // Find the largest value achievable within weight W
    for (int value = sumValue; value >= 0; value--) {

        if (dp[n][value] <= W) {
            ans = value;
            break;
        }
    }

    cout << ans << '\n';

    return 0;
}