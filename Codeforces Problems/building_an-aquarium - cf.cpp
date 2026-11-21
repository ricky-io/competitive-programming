#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(vector<ll> &a, ll mid, ll x){
    
    ll s = a.size();
    
    ll cap = mid*a.size();
    
    for(int i=0; i<a.size(); i++){
        cap -= min(mid, a[i]);
    }
    
    if(cap <= x) return true;
    else return false;
}

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    ll n, x;
	    cin >> n >> x;
	    
	    vector<ll> a(n);
	    
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    ll lo = 1LL;
	    ll hi = *max_element(a.begin(), a.end());
	    hi += x;
	    
	    ll ans =  1LL;
	    
	    while(lo <= hi){
	        
	        ll mid = lo + (hi - lo)/2;
	        
	        if(check(a, mid, x)){
	            ans = mid;
	            lo = mid+1;
	        }
	        
	        else hi = mid-1;
	    }
	    
	    cout << ans << '\n';
	}

}