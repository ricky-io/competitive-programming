#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    string a, b;
	    cin >> a >> b;
	    
	    if(a == b){
	        cout << 0 << '\n';
	        continue;
	    }
	    
	    int z = a.length() + b.length();
	    
	    int ops = INT_MAX;
	    
	    for(int i=0; i<a.length(); i++){
	        int len = 0;
	        for(int j=0; j<b.length(); j++){
	            if(a[i] != b[j]) continue;
	            int x = i; int y = j; int cnt = 0;
	            while(x<a.length() && y < b.length() && a[x] == b[y]){
	                cnt++;
	                x++;
	                y++;
	            }
	            
	            len = max(cnt, len);
	        }
	        int curr = z - 2*len;
	        ops = min(ops, curr);
	    }
	    cout << ops << '\n';
	}
	
	return 0;

}
