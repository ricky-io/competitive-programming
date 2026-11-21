#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    string s;
	    cin >> s;
	    
	    int zero = 0;
	    int one = 0;
	    
	    for(int i=0; i<n; i++) (s[i] == '0' ? zero++ : one++);
	    
	    if(zero < one){
	        int x = min(k, zero);
	        zero -= x;
	        one += x;
	    }
	    
	    else {
	        int x = min(k, one);
	            one -= x;
	            zero += x;
	    }
	    
	    
	    int ans = (1LL * zero * (zero + 1) / 2) + (1LL * one * (one + 1) / 2) + 1;
	    
	    cout << ans << '\n';
	}
	
	return 0;

}
