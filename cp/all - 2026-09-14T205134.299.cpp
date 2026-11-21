#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    long long n, k;
	    cin >> n >> k;
	    
	    vector<int> a(n);
	    
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    long long ans = 0;
	    
	    for(ll i=0; i<n; i++){
	        ans += __builtin_popcount(a[i]);
	    }
	    
	    for(int bit = 0; bit <= 60; bit++){
	        ll cost = (1LL << bit);
	        
	        for(auto x : a){
	            if(((x&cost) == 0) && k >= cost){
	                ans++;
	                k -= cost;
	            }
	        }
	    }
	    
	    cout << ans << endl;
	    
	    
	}
}
