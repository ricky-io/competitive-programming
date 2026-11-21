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
	    
	    int ans1 = 0;
	    int curr = 1;
	    long long ans2 = 1;
	    
	    for(int i=1; i<s.length(); ++i){
	        if(s[i] == s[i-1]) curr++;
	        
	        else{
	            ans1 += curr-1;
	            ans2 = (curr * ans2) % mod;
	            curr = 1;
	        } 
	    }
	    
	    // calc, final sum:
	    
	    ans1 += curr-1;
	    ans2 = (curr * ans2) % mod;
	    
	    ans2 = (ans2 * fact(ans1))%mod;
	    
	    
	    cout << ans1 << " " << ans2 << '\n';
	    
	}

}
