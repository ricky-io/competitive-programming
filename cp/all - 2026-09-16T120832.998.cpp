#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	    int n;
	    cin >> n;
	    
	    vector<ll> a(n);
	    
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    for(int bit = 0; bit < 20; bit++){
	        int ones = 0;
	        
	        ll mask = (1LL << bit);
	        
	        for(auto x : a){
	            if((x & mask) != 0) ones++;
	        }
	        
	        for(int i=0; i<ones; i++){
	            a[i] |= mask;
	        }
	        
	        for(int i=ones; i<n; i++){
	            if((a[i] & mask) != 0){
	                a[i] = (a[i] & (~mask));
	            }
	        }
	    }
	    
	    long long ans = 0;
	    
	    for(auto x : a){
	        ans += (x * x);
	    }
	    
	    cout << ans << endl;
}
