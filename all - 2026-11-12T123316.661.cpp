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
	    
	    map<int, int> mp;
	    set<int> s;
	    
	    for(int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        
	        s.insert(x);
	        mp[x] = i+1;
	    } 
	    
	    int ans = -1;
	    
	    for(auto f : s){
	        for(auto &[a, b] : mp){
	            if(gcd(a, f) == 1){
	                ans = max(ans, mp[a]+mp[f]);
	            }
	        }
	    }
	    
	    cout << ans << '\n';
	}

}
