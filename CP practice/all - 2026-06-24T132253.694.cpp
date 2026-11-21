#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int f(vector<int> &coins, int i, int x, vector<vector<int>> &dp){
    if(i == coins.size()) return 0;
    if(x == 0) return 1;
    
    if(dp[i][x] != -1) return dp[i][x];
    
    int take = 0;
    if(x >= coins[i]){
        take = f(coins, i, x-coins[i], dp);
    }
    int skip = f(coins, i+1, x, dp);
    
    return (take + skip)%mod;
}


int main() {
	int n; int x;
	cin>>n>>x;
	vector<int> coins(n);
	for(int i=0; i<n; i++){
	    cin>>coins[i];
	}
	
	vector<vector<int>> dp(n, vector<int> (x+1, -1));
	
	cout<<f(coins, 0, x, dp);

}
