#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int f(vector<int> &h, int i, int k, vector<int> &dp){
    if(i == 0) return 0;
    
    if(dp[i] != -1 ) return dp[i];
    
    int ans = 1e9;
    
    for(int j = 1; j<=k; j++){
        if(i-j >= 0){
            ans = min(ans, f(h, i-j, k, dp) + abs(h[i] - h[i - j]));
        }
    }
    
    return dp[i] = ans;
}

int main() {
	int n, k;
	cin>>n>>k;
	vector<int> h(n);
	for(int i=0; i<n; i++){
	  cin>>h[i];
	}
	vector<int> dp(n, -1);
	cout<<f(h, n-1, k, dp);
    return 0;
}
