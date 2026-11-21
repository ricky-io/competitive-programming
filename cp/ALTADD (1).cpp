#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<long long> a(n+1);
	    for(int i=1; i<=n; i++){
	        cin >> a[i];
	    }
	    
	    vector<long long> d(n+2, 0);
	    
	    for(int i = 1; i<=n; i++){
	        d[i] = ((i%2 == 0) ? a[i] : -a[i]);
	    }
	    
	    long long ans = 0;
	    for(int i=1; i<=n+1; i++){
	        ans += max(0LL, d[i]-d[i-1]);
	    }
	    
	    cout << ans << "\n";
	}

}
