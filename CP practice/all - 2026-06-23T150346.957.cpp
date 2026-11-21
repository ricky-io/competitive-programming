#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

vector<int> get_digits(int n){
    vector<int> result;
    while(n>0){
        if(n%10 != 0){
            result.push_back(n%10);
        }
        n /= 10;
    }
    return result;
}

int f(int n, vector<int>& dp){
    if(n == 0) return 0;
    if(n <= 9) return 1;
    
    if(dp[n] != -1) return dp[n];
    
    vector<int> d = get_digits(n);
    
    int ans = INT_MAX;
    
    for(int i=0; i<d.size(); i++){
        ans = min(ans, f(n-d[i], dp));
    }
    
    return dp[n] = 1 + ans;
}

int main() {
	int n;
	cin>>n;
	vector<int> dp(n+1, -1);
	int ans = f(n, dp) % mod;
	cout<<ans<<endl;

}
