#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
    	cin >> n;
    	
    	set<int> st;
    	
    	for(int i=0; i<n; i++){
    	    int x;
    	    cin >> x;
    	    
    	    st.insert(x);
    	}
    	
    	int ans = (st.size() + 1)/2;
    	
    	if(st.size() == 1){
    	    cout << 0 << '\n';
    	}
    	else cout << ans  << '\n';
	}
	
}
