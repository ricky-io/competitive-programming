#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t = 1;
	cin >> t;
	
	while(t--){
	    int n, l, r;
	    cin >> n >> l >> r;
	    
	    int i = 1;
	    vector<int> ans;
	    bool flag = true;
	    
	    while(i <= n){
	        int k = ((l+i-1)/i) * i;
	        
	        if(k > r) {
	            flag = false;
	            break;
	        }
	        ans.push_back(k);
	        i++;
	    }
	    
	    if(flag){
	        cout << "YES" << '\n';
	        for(int i=0; i<n; i++) cout << ans[i] << ' ';
	        cout << '\n';
	   }
	   else {
	       cout << "NO" << '\n';
	   }
	    
	}
	
	return 0;

}
