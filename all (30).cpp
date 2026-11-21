#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;


int main() {
	int n, k;
	cin >> n >> k;
	
	vector<int> a(n+1);
	
	for(int i=1; i<=n; i++) cin >> a[i];
	
	vector<vector<int>> dp(n+1, vector<int> (k+1, 0));
	
	dp[0][0] = 1;
	
	for(int i=1; i<=n; i++){
	    // calculate prefix sum for previous row:
	    vector<int> pref(k+2, 0);
	    for(int j=0; j<=k; j++){
	        pref[j+1] = (pref[j] + dp[i-1][j]) % mod; 
	    }
	    
	    for(int j=0; j<=k; j++){
	        int max_k = min(a[i], j);
	        
	        int l = max(0, j-max_k);
	        dp[i][j] = (pref[j+1]-pref[l] + mod) % mod;
	    }
	}
	
	cout << dp[n][k] << endl;
	
	return 0;

}
