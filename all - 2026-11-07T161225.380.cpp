#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, x;
	    cin >> n >> x;
	    
	    int l = 0;
	    int r = 0;
	    int ans = 0;
	    
	    vector<int> a(n);
	    
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	        
	        int nl = a[i] - x;
	        int nr = a[i] + x;
	        
	        if(i == 0){
	            l = nl;
	            r = nr;
	        }
	        
	        else {
	            l = max(l, nl);
	            r = min(r, nr);
	            
	            if(l > r){
	                ans++;
	                
	                l = nl;
	                r = nr;
	            }
	        }
	    }
	    
	    cout << ans << '\n';
	    
	}
	
	return 0;

}
