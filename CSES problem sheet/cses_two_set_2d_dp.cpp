#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    
    ll total_sum = n * (n+1)/2;
    
    if(total_sum % 2 != 0){
        cout << 0 << '\n';
        return 0;
    }
    
    ll target_sum = total_sum / 2;
    
    vector<vector<ll>> dp(n+1, vector<ll> (target_sum+1, 0));
    
    for(int i=0; i<=n; i++) dp[i][0] = 1;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=target_sum; j++){
            
            // don't take
            dp[i][j] = dp[i-1][j];
            
            // take, if possible
            if(j >= i){
                dp[i][j] = (dp[i][j] + dp[i-1][j-i])%mod;
            }
            
        }
    }
    
    ll inv_2 = 500000004;
    
    cout << (dp[n][target_sum] * inv_2) % mod << '\n';
    
    return 0;
    

}
