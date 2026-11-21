#include <bits/stdc++.h>
using namespace std;

#define MOD (long long)(1e9+7)
#define int long long


signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n), b(n);
	    
	    for(int i=0; i<n; i++) cin >> a[i];
	    for(int i=0; i<n; i++) cin >> b[i];
	    
	    sort(a.begin(), a.end());
	    sort(b.rbegin(), b.rend());
	    
	    int result = 1;
	    
	    for(int i=0; i<n; i++){
	        int temp = std::upper_bound(a.begin(), a.end(), b[i]) - a.begin();
	        int cnt = a.size() - temp;
	        
	        result = result * max(cnt-i, 0LL) % MOD;
	    }
	    
	    cout << result << '\n';
	}

}
