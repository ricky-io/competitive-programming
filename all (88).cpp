#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n, k;
	    cin >> k >> n;
	    
	    vector<int> a(n*k+1);
	    for(int i=1; i<=n*k; i++) cin >> a[i];
	    
	    ll x = (k+1)/2 - 1;
	    x = k-x;
	    
	    ll z = k*n+1;
	    
	    ll ans = 0;
	    
	    while(n--){
	        z -= x;
	        if(z <= 0) break;
	        
	        ans += a[z];
	    }
	    
	    cout << ans << '\n';
	}
	
	return 0;

}
