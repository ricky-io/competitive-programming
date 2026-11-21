#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n+1);
	    for(int i=1; i<=n; i++) cin >> a[i];
	    
	    vector<int> pref(n+1, 0);
	    vector<int> suf(n+2, 0);
	    
	    for(int i=1; i<=n; i++) pref[i] += pref[i-1] + a[i];
	    for(int i=n; i>=0; i--) suf[i] += suf[i+1] + a[i];
	    
	    int ans = 0;
	    
	    for(int i=1; i<n; i++){
	        ans = max(ans, gcd(pref[i], suf[i+1]));
	    }
	    
	    cout << ans << '\n';
	}

}
