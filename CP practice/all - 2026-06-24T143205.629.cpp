#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int f(vector<int> &h, int i, vector<int> &dp){
    if(i == h.size()-1) return 0;
    
    if(dp[i] != -1 ) return dp[i];
    
    int ans =  abs(h[i + 1] - h[i]) + f(h, i + 1, dp);
    
    if(i+2 < h.size()){
        ans = min(ans, abs(h[i + 2] - h[i]) + f(h, i + 2, dp));
    }
    
    return dp[i] = ans;
}

int main() {
	int n;
	cin>>n;
	vector<int> h(n);
	for(int i=0; i<n; i++){
	  cin>>h[i];
	}
	vector<int> dp(n+1, -1);
	cout<<f(h, 0, dp);
    return 0;
}
