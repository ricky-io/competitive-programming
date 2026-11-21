#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n+1);
        vector<int> pref(n+1, 0);
        a[0] = 0;
        
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        
        sort(a.begin()+1, a.end());
        
        for(int i=1; i<=n; i++){
            pref[i] = pref[i-1] + a[i];
        }
        
        int ans = 0;
        
        for(int i=0; i<=k; i++){
            ans = max(ans, pref[n - (k - i)] - pref[2 * i]);
        }
        
        cout << ans << '\n';
        
	}

}
