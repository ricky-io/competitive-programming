#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long f(long long n, vector<int> &dp){
    if(n == 0) return 1;
    if(n < 0) return 0;
    
    if(dp[n] != -1) return dp[n];
    
    long long ans = 0;
    
    for(int d = 1; d<7; d++){
        ans += f(n-d, dp);
    }
    
    return dp[n] = ans%MOD;
}

int main() {
	long long n;
	cin>>n;
	vector<int> dp(n+1, -1);
	cout<<f(n, dp);

}
