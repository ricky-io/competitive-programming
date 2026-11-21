#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    ll n, k, b, s;
	    cin >> n >> k >> b >> s;
	    
	    vector<ll> a(n);
	    
	    if(s < k*b || s > k*b + (k-1)*n) {
	        cout << -1 << '\n';
	        continue;
	    }
	    
	    a[0] = k*b;
	    
	    s -= a[0];
	    
	    for(int i=1; i<n; i++){
	        ll w = min(k-1, s);
	        
	        a[i] = w;
	        
	        s -= w;
	    }
	    
	    sort(a.begin(), a.end());
	    
	    for(int i=0; i<n; i++) cout << a[i] << ' ';
	    
	    cout << '\n' ;
	}
	
	return 0;

}
