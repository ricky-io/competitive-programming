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
	    
	    if(mx <= 2){
	        cout << 1 << endl;
	    }
	    else {
	        int ans = (mx + 2 - 1)/2;
	        cout << ans << endl;
	    }
	    
	}
	
	return 0;

}
