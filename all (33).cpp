#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

int fact(int n){
    int res = 1;
    for(int i=2; i<=n; i++) res = (1LL * res * i) % mod;
    return res;
    
}

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    string s;
	    cin >> s;
	    
	    int best = 1;
	    int curr = 1;
	    
	    for(int i=1; i<s.length(); ++i){
	        if(s[i] == s[i-1]) curr++;
	        
	        else curr = 1;
	        
	        best = max(best, curr); 
	    }
	    
	    int ans1 = best-1;
	    int ans2 = fact(best);
	    
	    cout << ans1 << " " << ans2 << '\n';
	    
	}

}
