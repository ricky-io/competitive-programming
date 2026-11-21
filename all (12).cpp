#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll rev(ll n){
    ll b = n;
    
    ll r = 0;
    
    while(b > 0){
        r = r*10 + b%10;
        b /= 10;
    }
    
    return min(r, n);
}

ll concat(ll a, ll b){
    ll x = a;
    ll y = b;
    
    ll a1 = 0;
    ll b1 = 0;
    
    while(a > 0) {
        a /= 10;
        a1++;
    }
    //cout << a1 << endl;
    while(b > 0){
        b /= 10;
        b1++;
    }
    //cout << b1 << endl;
    
    ll a2 = 1;
    while(a1--) a2 *= 10LL;
    ll b2 = 1;
    while(b1--) b2 *= 10LL;
    
    //cout << a2 <<" " << b2 << endl;
    
    
    ll f = (x * b2) + y;
    ll s = (y * a2) + x;
    
    // cout << f << " " << s << endl;
     
    return max(f, s);
}

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    long long n, m;
	    cin >> n >> m;
	    
	    vector<ll> a;
	    
	    for(int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        
	        if(x > 9) x = rev(x);
	        a.push_back(x);
	    }
	    
	    sort(a.rbegin(), a.rend());
	    
	    // checking my array withe reverded elements :
	   // for(int i=0; i<n; i++) cout << a[i] << " ";
	   // cout << endl;
	    
	    ll win = a[0];
	    
	    for(int i=1; i<n; i++){
	        win = max(win, concat(win, a[i]));
	        // checking concatenated values :: 
	       // cout << win << "  "; 
	    }
	    
	    long long fact = 1;
	    while(m--) fact *= 10;
	    
	    
	    
	    if(win <= fact) cout << "Anna" << endl;
	    else cout << "Sasha" << endl;
	    
	}
	
	return 0;

}
