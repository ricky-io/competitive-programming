#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int w, h;
	    cin >> w >> h;
	    
	    int area = INT_MIN;
	    
	    for(int i=0; i<4; i++){
	        int k;
	        cin >> k;
	        
	        int first, last;
	        
	        for(int j=0; j<k; j++){
	            int x;
	            cin >> x;
	            
	            if(j==0) first = x;
	            if(j == k-1) last = x;
	            
	            
	        }
	        
	        int base = last - first;
	        
	        int height;
	        
	        if(i <= 1) height = h;
	        else height = w;
	        
	        area = max(area, height*base);
	        
	    }
	    
	    cout << area << '\n';
	}
	
	return 0;

}
