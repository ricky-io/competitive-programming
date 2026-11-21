#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    unordered_map<int, int> ss;
	    vector<int> s(n+1);
	    
	    for(int i=1; i<=n; i++) {
	        cin >> s[i];
	        
	        ss[s[i]]++;
	    }
	    
	    bool ans = true; 
	    
	    for(auto &[x, y] : ss){
	        if(x != 0 && y < 2) {
	            ans = false;
	            cout << -1 << '\n';
	            break;
	        }
	    }
	    
	    if(ans){
	        int i=1;
	        for(int j=2; j<=n; j++){
	            if(s[j]==s[j-1]){
	                cout << j << ' ';
	            } 
	            
	            if(s[j] != s[j-1] || j==n){
	                cout << i << ' ';
	                i = j;
	            }
	        }
	        
	        cout << '\n';
	    }
	}
	
	return 0;

}
