#include <bits/stdc++.h>
using namespace std;

int f(string &s, int i, int d, vector<int>& dp){
    if(i == 0) return 0;
    
    if(dp[i] != -2) return dp[i];
    
    int ans = INT_MAX;
    
    for(int j=i-1; j >= i - d; j--){
        if(j >= 0 && s[j] == '1'){
            int res = min(ans, f(s, j, d,dp));
            if(res != -1)
                ans=min(ans, res);
        }
        
    }
    
    if(ans==INT_MAX)
        return dp[i]=-1;

    return dp[i]=1+ans;
}

int main() {
	int n; int d;
	cin>>n>>d;
	string s;
	cin>>s;
	vector<int> dp(n, -2);
	int res = f(s, n-1, d,dp);
	cout<<res<<endl;
	return 0;
}
