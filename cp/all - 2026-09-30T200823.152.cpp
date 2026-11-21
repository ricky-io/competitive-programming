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
	    
	    if(a == b){
	        cout << 0 << '\n';
	        continue;
	    }
	    
	    vector<ll> c(n+2);
	    
	    c[0] = 0;
	    
	    for(int i=1; i<=n; i++){
	        c[i] = ((c[i-1] << 1)) - (a[i] - b[i]);
	    }
	    
	    for(int i = 1; i<=n; i++) cout << c[i] << " ";
	    
	    cout << endl;
	    
	    
	}

}
