#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<long long> a(n);
	    
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    int ans = 2;
	    
	    for(int i=0; i<n; i++){
	        ans = a[i];
	        unordered_set<int> st;
	        for(int j=0; j<n; j++){
	            st.insert(a[j] % ans);
	        }
	        if(st.size() >= 2) break;
	    }
	    
	    cout << ans << endl;
	    
	}

}
