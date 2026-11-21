#include <bits/stdc++.h>
using namespace std;

// Exponent II --> CSES sheet

const long long MOD = 1e7 + 7;

// Binary exponentiation (a^b % mod)
long long modpow(long long a, long long b, long long mod){
    long long res = 1%mod;
    a%= mod;
    
    while(b>0){
        if( b&1) res = (res * a) % mod;
        a = (a*a) % mod;
        b>>= 1;
    }
    return res;
}

int main() {
	// your code goes here
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin>>n;
	
	while(n--){
	    long long a, b, c;
	    cin>>a>>b>>c;
	    
	    long long exp = modpow(b,c,MOD-1);
	    long long ans = modpow(a, exp, MOD);
	    
	    cout<<ans<<'\n';
	}
	return 0;

}
