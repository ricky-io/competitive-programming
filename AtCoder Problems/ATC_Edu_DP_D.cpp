#include <bits/stdc++.h>
using namespace std;

// D - Knapsack 1

int main() {
    int N, W;
    cin >> N >> W;

    vector<int> wt(N + 1), val(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> wt[i] >> val[i];
    }

    vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= W; j++) {
            dp[i][j] = dp[i - 1][j]; // skip item i

            if (j >= wt[i]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - wt[i]] + val[i]);
            }
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}