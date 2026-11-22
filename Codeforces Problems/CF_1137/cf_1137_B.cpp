#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, k;
        cin >> n >> k;

        vector<int> a(n+1), r(n+1, 1);

        for(int i=1; i<=n; i++){
            cin >> a[i];

            if(i > 1 && a[i] == a[i-1]) r[i] = r[i-1] + 1;
        }

        int w = n-k+1;
        int ans = 0;
        
        for(int i=1; i<=k; i++){
            if(r[i+w-1] >= w) ans++;
        }

        cout << ans << '\n';
	    
	}
	return 0;

}
