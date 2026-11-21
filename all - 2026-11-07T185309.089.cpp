#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int n;
	cin >> n;
	
	vector<int> a(n+1);
	vector<int> pref(n+1, 0);
	
	for(int i=1; i<=n; i++){
	    cin >> a[i];
	    pref[i] = pref[i-1] + a[i];
	}
	
	vector<int> prefmin(n+1);
	vector<int> prefmax(n+1);
	
	prefmax[0] = prefmin[0] = 0;
	
	for(int i=1; i<=n; i++){
	    prefmin[i] = min(prefmin[i-1], pref[i]);
	    prefmax[i] = max(prefmax[i-1], pref[i]);
	}
	
	vector<int> sufmin(n+1);
	vector<int> sufmax(n+1);
	
	sufmax[n] = sufmin[n] = pref[n];
	
	for(int i=n-1; i>=0; i--){
	    sufmin[i] = min(sufmin[i+1], pref[i]);
	    sufmax[i] = max(sufmax[i+1], pref[i]);
	}
	
	// choice 1
	
	int ans = prefmax[n] - prefmin[n] + 1;
	
	// choice 2 :
	
	for(int k=1; k<=n; k++){
	    int shift = 2*a[k];
	    
	    int mn = min(prefmin[k-1], sufmin[k] - shift);
	    
	    int mx = max(prefmin[k-1], sufmax[k] - shift);
	    
	    ans = max(ans, mx-mn+1);
	    
	}
	
	cout << ans << '\n';
	
	return 0;
}
