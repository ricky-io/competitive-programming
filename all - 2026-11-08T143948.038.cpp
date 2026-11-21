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
	    
	    int x = r/(b+1);
	    int rem = r % (b+1);
	    
	    for(int i=0; i<=b; i++){
	        int cnt = x;
	        
	        if(rem > 0){
	            cnt ++;
	            rem--;
	        }
	        
	        for(int j=0; j<cnt; j++) cout << 'R';
	        
	        if(i < b) cout << 'B';
	    }
	    cout << '\n';
	}
	
	return 0;

}
