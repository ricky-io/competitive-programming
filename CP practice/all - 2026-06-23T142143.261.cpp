#include <bits/stdc++.h>
using namespace std;

const int MOD = 100000009;

int f(vector<int> &coins, int target, vector<int> &dp){
    if(target == 0) return 1;
    if(target < 0) return 0;
    
    if(dp[target] != -1) return dp[target];
    
    long long sum = 0;
    
    for(int i=0; i<coins.size(); i++){
        if(target >= coins[i]){
            sum += f(coins, target-coins[i], dp);
        }
    }
    
    return dp[target] = sum%MOD;
}

int main() {
	int n; int x;
	cin>>n>>x;
	vector<int> coins(n);
	for(int i=0; i<n; i++){
	    cin>>coins[i];
	}
	vector<int> dp(100000009, -1);
	
	//vector<vector<int>> dp(n, vector<int> (x+1, -1));
	int ans = f(coins, x, dp);
    cout<<ans<<endl;

}
