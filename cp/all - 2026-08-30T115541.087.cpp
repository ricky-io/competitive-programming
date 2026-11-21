#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    vector<int> b(n);
	    
	    for(int i=0; i<n; i++) cin >> a[i];
	    for(int i=0; i<n; i++) cin >> b[i];
	    
	    map<int, int> cnta, cntb;
	    
	    for(int i=0; i<n; ){
	        int j=i;
	        while(j<n && a[i] == a[j]){
	            j++;
	        }
	        cnta[a[i]] = max(cnta[a[i]], j-i);
	        
	        i = j;
	    }
	    
	    for(int i=0; i<n; ){
	        int j=i;
	        while(j<n && b[i] == b[j]){
	            j++;
	        }
	        cntb[b[i]] = max(cntb[b[i]], j-i);
	        i = j;
	    }
	    
	    int ans = 0;
	    for(auto &[x, len] : cnta){
	        ans = max(ans, len + cntb[x]);
	    }
	    
	    for(auto &[x, len] : cntb){
	        ans = max(ans, len + cnta[x]);
	    }
	    
	    cout << ans << endl;
	    
	    
	}

}
