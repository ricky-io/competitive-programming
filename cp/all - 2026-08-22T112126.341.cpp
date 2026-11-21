#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    int ans = k;
	    
	    for(int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        
	        if(x >= k) ans = min(ans, x % k);
	        else ans = min(ans, k-x);
	    }
	    
	    cout << ans << endl;
	    
	}

}
