#include <bits/stdc++.h>
using namespace std;


using ll = long long;
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	ll n;
	cin>>n;
	ll sum = 0;
	
	for(ll i=0; i<n-1; i++){
	    ll x;
	    cin>>x;
	    sum+=x;
	}
	
    ll ans = (n * (n+1))/2;
	ans = ans - sum;
	cout<<ans<<endl;
	return 0;
}
