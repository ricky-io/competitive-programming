#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9 + 7;

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    int ans = (((n * (n+1)) % mod) * ((4*n - 1)%mod)*337);
	    
	    ans %= mod;
	    
	    cout << ans << '\n';
	    
	}
	
	return 0;

}
