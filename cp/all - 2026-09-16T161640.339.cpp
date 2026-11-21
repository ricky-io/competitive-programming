#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	int n;
	cin >> n;
	
	vector<ll> a(n);
	
	for(int i=0; i<n; i++) cin >> a[i];
	
	ll best = LLONG_MAX;
	
	for(int mask = 0; mask < (1 << n); mask++){
	    ll sum_a = 0;
	    ll sum_b = 0;
	    
	    for(int i=0; i<n; i++){
	        if((mask & (1 << i)) != 0) sum_a += a[i];
	        else sum_b += a[i];
	    }
	    
	    best = min(best, abs(sum_a-sum_b));
	}
	
	cout << best << endl;

}
