#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, k, a, b;
	    
	    cin >> n >> k >> a >> b;
	    
	    vector<ll> x(n+1);
	    vector<ll> y(n+1);
	    
	    for(int i=1; i<=n; i++) cin >> x[i] >> y[i];
	    
	    ll total_cost = llabs(x[a] - x[b]) + llabs(y[a] - y[b]);
	    
	    ll d1 = LLONG_MAX / 2;
	    ll d2 = LLONG_MAX / 2;
	    
	    for(int i=1; i<=k; i++){
	        d1 = min(d1, llabs(x[a] - x[i]) + llabs(y[a] - y[i]));
	        d2 = min(d2, llabs(x[b] - x[i]) + llabs(y[b] - y[i]));
	        
	        total_cost = min(total_cost, d1+d2);
	    }
	    
	    cout << total_cost << '\n';
	}

}
