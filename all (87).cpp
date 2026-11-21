#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    ll n, x;
	    cin >> n >> x;
	    
	    vector<ll> a(n);
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    ll mx = 0;
	    
	    for(int i=0; i<n; i++){
	        mx += (a[i] + x - 1LL)/x;
	    }
	    
	    
	    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
	    
	    ll mn = (sum + x - 1LL)/ x;
	    
	    cout << mn << ' ' << mx << '\n';
	    
	}
	
	return 0;

}
