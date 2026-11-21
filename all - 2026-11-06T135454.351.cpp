#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int m, n;
	    cin >> n >> m;
	    
	    int ans = 0;
	    int negs = 0;
	    int sum = 0;
	    int mn = LLONG_MAX;
	    
	    for(int i=0; i<n; i++){
	        for(int j=0; j<m; j++){
	            int x;
	            cin >> x;
	            
	            sum += abs(x);
	            
	            if(x < 0) negs++;
	            
	            mn = min(mn, abs(x));
	        }
	    }
	    
	    if(negs%2){
	        sum -= 2*mn;
	    }
	    
	    cout << sum << '\n';
	    
	}


}
