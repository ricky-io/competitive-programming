#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t = 1;
	cin >> t;
	
	while(t--){
	    string s;
	    cin >> s;
	    
	    int n = s.length();
	    
	    set<char> st;
	    
	    int k;
	    
	    for(k=0; k<n; k++){
	        if(!st.count(s[k])) st.insert(s[k]);
	        else break;
	    }
	    
	    bool mila = true;
	    
	    for(int i=k; i<n; i++){
	        if(s[i] != s[i-k]){
	            cout << "NO" << "\n";
	            mila = false;
	            break;
	        }
	    }
	    
	    if(mila) cout << "YES" << '\n';
	    else continue;
	}
	
	return 0;

}
