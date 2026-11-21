#include <bits/stdc++.h>
using namespace std;
 
int main() {
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
	        
	        mp[x]++;
	        mx = max(mx, mp[x]);
	    }
	    
	    int ans = 0;
	    
	    while(mx < n){
	        int d = min(n-mx, mx);
	        ans += 1+d;
	        mx += d;
	    }
	    
	    cout << ans << endl;
	}
	
	return 0;
 
}