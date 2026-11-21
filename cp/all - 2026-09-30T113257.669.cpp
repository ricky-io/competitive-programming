#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll smallestCompatiblePower(ll x, ll n){
    for(ll p = 1; p <= n; p<<=1LL){
        if((p&x) == 0) return p;
    }
    return -1;
}

int main() {
	ll n, q;
	cin >> n >> q;
	
	while(q--){
	    ll s, t;
	    cin >> s >> t;
	    
	    if(s == t){
	        cout << 0 << endl;
	        continue;
	    }
	    
	    if((s & t) == 0){
	        cout << s+t << endl;
	        continue;
	    }
	    
	    ll a = smallestCompatiblePower(s, n);
	    ll b = smallestCompatiblePower(t, n);
	    
	    if(a == -1 || b == -1){
	        cout << -1 << endl;
	        continue;
	    }
	    
	    if(a == b){
	        cout << s + t + 2*(a) << endl;
	    }
	    
	    else cout << s + t + 2 * (a + b) << endl;
	   
	}
	
	return 0;

}
