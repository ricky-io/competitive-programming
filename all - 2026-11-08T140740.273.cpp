#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    vector<char> a(n);
	    
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    int b = 0;
	    for(int i=0; i<k; i++) if(a[i] == 'B') b++;
	    
	    int i=0;
	    int best = k-b;
	    for(int j=k; j<n; j++, i++){
	        if(a[i] == 'B') b--;
	        if(a[j] == 'B') b++;
	        
	        best = min(best, k-b);
	    }
	    
	    cout << best << '\n';
	}
	
	return 0;

}
