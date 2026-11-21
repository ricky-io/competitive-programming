#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
    
    while(t--){
    	int n, q;
    	cin >> n >> q;
    	
    	vector<int> a(n+1);
    	a[0] = 0;
    	
    	vector<int> pref(n+1);
    	
    	pref[0] = 0;
    	
    	for(int i=1; i<=n; i++){
    	    cin >> a[i];
    	    pref[i] = pref[i-1] + a[i];
    	}
    	
    	vector<int> suf(n+1);
    	suf[n] = a[n];
    	
    	for(int i=n-1; i>=1; i--){
    	    suf[i] = suf[i+1] + a[i];
    	}
    	suf.push_back(0);
    	
    	while(q--){
    	    int l, r, k;
    	    cin >> l >> r >> k;
    	    
    	    long long sum = pref[l-1] + suf[r+1] + (k*(r-l+1));
    	    cout << ((sum%2) ? "Yes" : "No" ) <<"\n";
    	}
    }

	return 0;

}
