#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    unordered_map<int, int> mp;
	    
	    int mx = 0;
	    
	    for(int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        
	        mx = max(mx, ++mp[x]);
	    }
	    
	    mp.reserve(n);
	    
	    int ans = 0;
	    
	    while(mx < n){
	        int d = min(n-mx, mx);
	        ans += 1+d;
	        mx += d;
	    }
	    
	    cout << ans << '\n';
	}
	
	return 0;
 
}