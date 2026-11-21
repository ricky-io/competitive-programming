#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
    	cin >> n;
    	
    	vector<int> v(n);
    	for(int i=0; i<n; i++) cin >> v[i];
    	
    	int ans = 0;
    	int i = n-1;
    	
    	while(i >= 0 && v[i] == v[n-1]){
    	    i--;
    	}
    	
    	if(i == -1){
    	    cout << 0 << '\n';
    	    continue;
    	}
    	
    	while(i >= 0){
    	    i -= (n-1-i);
    	    ans++;
    	    
    	    while(i >= 0 && v[i] == v[n-1]){
    	        i--;
    	    }
    	}
    	
        cout << ans << '\n';
	}
	
	
	
	return 0;
	
}
