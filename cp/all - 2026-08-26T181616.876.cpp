#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    
    vector<vector<char>> grid(n + 1, vector<char>(n + 1));
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> grid[i][j];
        }
    }

    dp[1][1] = (grid[1][1] == '.' ? 1 : 0);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {

            if (grid[i][j] == '*') {
                dp[i][j] = 0;
                continue;
            }

            if (i == 1 && j == 1)
                continue;

            if (i > 1)
                dp[i][j] += dp[i - 1][j];

            if (j > 1)
                dp[i][j] += dp[i][j - 1];

            dp[i][j] %= MOD;
        }
    }

    cout << dp[n][n] << '\n';
}