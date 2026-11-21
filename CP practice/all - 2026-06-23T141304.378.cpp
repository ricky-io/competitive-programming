#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &coins, int target, vector<int> &dp){
    if(target == 0) return 0;
    
    if(dp[target] != -2) return dp[target];
    
    int sum = INT_MAX;
    
    for(int i=0; i<coins.size(); i++){
        if(target >= coins[i]){
            sum = min(sum, f(coins, target-coins[i], dp));
        }
    }
    
    return dp[target] = sum == INT_MAX ? INT_MAX : 1 + sum;
}

int main() {
	int n; int x;
	cin>>n>>x;
	vector<int> coins(n);
	for(int i=0; i<n; i++){
	    cin>>coins[i];
	}
	vector<int> dp(1000006, -2);
	
	//vector<vector<int>> dp(n, vector<int> (x+1, -1));
	int ans = f(coins, x, dp);
	if(ans == INT_MAX) cout<<-1<<endl;
	else cout<<ans<<endl;

}
