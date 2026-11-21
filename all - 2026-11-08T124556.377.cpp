#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int a, b;
	    cin >> a >> b;
	    
	    int best = LLONG_MAX;
	    
	    for(int k=0; k<=30; k++){
	        
	        int nb = b+k;
	        
	        if(nb == 1) continue;
	        
	        int x = a;
	        int ops = k;
	        
	        while(x > 0){
	            x /= nb;
	            ops++;
	        }
	        
	        best = min(best, ops);
	    }
	    
	    cout << best << '\n';
	    
	}
	
	return 0;

}
