#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    char color;
	    
	    cin >> n >> color;
	    
	    string s;
	    cin >> s;
	    
	    s += s;
	    
	    n *= 2;
	    
	    int last_green_idx = -1;
	    int mx_seconds = INT_MIN;
	    
	    for(int i=n-1; i>=0; i--){
	        if(s[i] == 'g'){
	            last_green_idx = i;
	        }
	        
	        if(s[i] == color){
	            int d = last_green_idx - i;
	            
	            mx_seconds = max(mx_seconds, d);
	        }
	        
	        
	    }
	    
	    cout << mx_seconds << '\n';
	    
	}
	
	return 0;

}
