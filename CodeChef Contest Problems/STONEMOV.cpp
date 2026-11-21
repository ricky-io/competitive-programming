#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n+2);
	    for(int i=1; i<=n; i++) cin >> a[i];
	    
	    vector<int> d(n+3, 0);
	    
	    int stones = 0;
	    int next = 0;
	    
	    for(int i=1; i<=n; i++){
	        
	        next += d[i];
	        
	        int y = a[i] + next;
	        
	        int x = min(y, n-i);
	        
	        stones += x;
	        
	        if(x > 0){
	            d[i+1] += 1;
	            d[i+x+1] -= 1;
	        }
	        
	    }
	    
	    cout << stones << '\n';
 	}

}
