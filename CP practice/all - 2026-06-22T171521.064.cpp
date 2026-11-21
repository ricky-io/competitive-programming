#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long f(vector<vector<char>>& grid, int sr, int sc, int n, vector<vector<int>>& dp){
    if(sr >= n || sc >= n) return 0;
    if(grid[sr][sc] == '*') return 0;
    if(sr == n-1 && sc == n-1) return 1;
    
    if(dp[sr][sc] != -1) return dp[sr][sc];
    
    return dp[sr][sc] = (f(grid, sr+1, sc, n, dp) + f(grid, sr, sc + 1, n, dp))%MOD;
}

int main() {
	long long n;
	cin>>n;
	vector<vector<char>> grid(n, vector<char> (n));
	for(int i=0; i<n; i++){
	    for(int j=0; j<n; j++){
	        cin>>grid[i][j];
	    }
	}
	// dp initialize
	vector<vector<int>> dp(n, vector<int> (n+1, -1));
	// function call
	cout<<f(grid, 0, 0, n, dp);

    return 0;
}
