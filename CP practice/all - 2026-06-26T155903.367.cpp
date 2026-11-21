#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main() {
	int t;
	cin>>t;
	vector<int> q(t);
	int mx = 0;
	for(int i=0; i<t; i++){
	    cin>>q[i];
	    mx = max(mx, q[i]);
	}
	vector<long long> dp1(mx+1), dp2(mx+1);
	
	dp1[1] = 1;
	dp2[1] = 1;
	
	for(int i=2; i<=mx; i++){
	    dp1[i] = (4LL * dp1[i-1] + dp2[i-1]) % mod;
	    dp2[i] = (dp1[i-1] + 2LL * dp2[i-1]) % mod;
	}
	
	for(int n : q){
	    cout<<(dp1[n] + dp2[n])%mod<<endl;
	}

}
