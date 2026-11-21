#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main() {
	int n;
	cin >> n;
	vector<vector<char>> grid(n+1, vector<char> (n+1));
	vector<vector<int>> dp(n+1, vector<int> (n+1, 1));
	
	for(int i=1; i<=n; i++)
	    for(int j=1; j<=n; j++){
	         cin >> grid[i][j];
	         if(grid[i][j] == '*') dp[i][j] = 0;
	    }
	       

    for(int i=2; i<=n; i++){
        for(int j=2; j<=n; j++){
            if(dp[i][j] != 0) dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;
        }
    }
    
    cout << dp[n][n] << endl;

}
