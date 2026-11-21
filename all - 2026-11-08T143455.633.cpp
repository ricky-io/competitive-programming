#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, r, b;
	    cin >> n >> r >> b;
	    
	    if(b == 1){
	        string s(n, 'R');
	        s[n/2] = 'B';
	        
	        cout << s << '\n';
	        continue;
	    }
	    
	    int x = n/b;
	    
	    cout << 'R';
	    
	    for(int i=1; i<n; i++){
	        if(i%x == 0) cout << 'B';
	        else cout << 'R';
	    }
	    cout << '\n';
	}
	
	return 0;

}
