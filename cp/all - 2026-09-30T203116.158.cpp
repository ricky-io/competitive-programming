#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	ll t;
	cin >> t;
	
	while(t--){
	    ll n;
	    cin >> n;
	    
	    vector<ll> a(n+1);
	    vector<ll> b(n+1);
	    a[0] = 0;
	    b[0] = 0;
	    
	    for(int i=1; i<=n; i++) cin >> a[i];
	    for(int i=1; i<=n; i++) cin >> b[i];
	    
	    //
	    
	    ll carry = 0;
	    ll ans = 0;
	    bool possible = true;
	    
	    for(int i=1; i<=n; i++){
	        ll avail = a[i] + 2LL*carry;
	        
	        if(avail < b[i]){
	            possible = false;
	            break;
	        }
	        
	        carry = avail - b[i];
	        
	        if(carry > 1000000000LL){   // can never return to 0
                possible = false;
                break;
            }
	        
	        
	        ans += carry;
	    }
	    if(!possible || carry != 0) {
	        cout << -1 << endl;
	    }
	    else cout << ans << endl;
	}

}