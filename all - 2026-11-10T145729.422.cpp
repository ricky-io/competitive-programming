#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, k;
    	cin >> n >> k;
    	
    	vector<int> v(n);
    	for(int i=0; i<n; i++) cin >> v[i];
    	
    	map<int, bool> mp;
    	
    	for(auto it : v){
    	    mp[it] = true;
    	}
    	
    	bool found = false;
    	
    	for(int i=0; i<n; i++){
    	    if(mp.count(v[i] - k)){
    	        cout << "YES" << '\n';
    	        found = true;
    	        break;
    	    }
    	}
    	
    	if(!found) cout << "NO" << '\n';
	}
	
	return 0;
	
}
