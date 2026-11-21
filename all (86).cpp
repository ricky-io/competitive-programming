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
	    
	    vector<int> a(n);
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    ll mx = 0;
	    
	    for(int i=0; i<n; i++){
	        mx += (a[i] + x - 1)/x;
	    }
	    
	    
	    ll sum = std::accumulate(a.begin(), a.end(), 0);
	    
	    ll mn = (sum + x - 1)/ x;
	    
	    cout << mn << ' ' << mx << '\n';
	    
	}
	
	return 0;

}
