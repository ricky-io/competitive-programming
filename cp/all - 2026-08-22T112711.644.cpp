#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    int ans = k;
	    int even = 0;
	    
	    for(int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        
	        ans = min(ans, ((k - x%k) % k));
	        
	        if(x%2 == 0) even++;
	    }
	    
	    if(k == 4){
	        if(even >= 2) cout << 0 << endl;
	        
	        else if(even == 1) cout << min(ans, 1) << endl;
	        
	        else if(even == 0) cout << min(ans, 2) << endl;
	    }
	    
	    else cout << ans << endl;
	    
	}

}
