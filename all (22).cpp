#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll solve(vector<ll> &a, int n){
    
    ll gcd_e = 0;
    ll gcd_o = 0;
    for(int i=0; i<n; i++){
        if(i%2 == 0) gcd_e = gcd(gcd_e, a[i]);
        else gcd_o = gcd(gcd_o, a[i]);
    }
    
    // Try gcd of even-indexed elements
    bool ok = true;
    for (int i = 1; i < n; i += 2) {
        if (a[i] % gcd_e == 0) {
            ok = false;
            break;
        }
    }

    if (ok)
        return gcd_e;

    // Try gcd of odd-indexed elements
    ok = true;
    for (int i = 0; i < n; i += 2) {
        if (a[i] % gcd_o == 0) {
            ok = false;
            break;
        }
    }

    if (ok)
        return gcd_o;

    return 0;
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
