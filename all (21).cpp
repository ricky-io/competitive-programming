#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll solve(vector<ll> &a, int n){
    if(n == 1) return 1LL;
    if(n == 2 && a[0] == a[1]) return 0LL;
    if(n == 2 && gcd(a[0], a[1]) == 1) return max(a[0], a[1]);
    
    ll gcd_e = a[0];
    ll gcd_o = a[1];
    for(int i=2; i<n; i++){
        if(i%2 == 0) gcd_e = gcd(gcd_e, a[i]);
        else gcd_o = gcd(gcd_o, a[i]);
    }
    
    if(gcd_o == gcd_e) return 0LL;
    
    ll d = max(gcd_e, gcd_o);
    
    vector<ll> c = a;
    
    for(int i=0; i<n; i++){
        if(c[i]%d == 0) c[i] = 0;
        else c[i] = 1;
    }
    
    for(int i=0; i<n-1; i++){
        if(c[i] == c[i+1]) return 0LL;
    }
    
    return d;
}

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	   vector<ll> a(n);
	   for(int i=0; i<n; i++) cin >> a[i];
	   
	    cout << solve(a, n) << '\n';
	}

}
