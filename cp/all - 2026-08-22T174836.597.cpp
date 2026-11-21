#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	
	vector<int> pref(n);
	vector<int> suf(n);
	pref[0] = a[0];
	
	for(int i=1; i<n; i++){
	    pref[i] = pref[i-1] + a[i];
	}
	
	suf[n-1] = a[n-1];
	for(int i=n-2; i>=0; i--){
	    suf[i] = suf[i+1] + a[i];
	}
	
	int ans = INT_MAX;
	
	for(int i=0; i<n-1; i++){
	    ans = min(ans, abs(pref[i] - suf[i+1]));
	}
	
	cout << ans << endl;

}
