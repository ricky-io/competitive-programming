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
	    
	    vector<int> a(n);
	    
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    int ans = -1;
	    
	    for(int i=0; i<n; i++){
	        for(int j=i; j<n; j++){
	            if(gcd(a[i], a[j]) == 1){
	                ans = max(ans, i+j+2);
	            }
	        }
	    }
	    
	    cout << ans << '\n';
	}

}
