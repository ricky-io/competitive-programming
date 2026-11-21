#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n+1);
	    vector<int> b(n+1);
	    
	    b[n] = n;
	    
	    for(int i=1; i<=n; i++) cin >> a[i];
	    
	    for(int i=n-1; i>0; i--){
	        if(a[i] == a[i+1]) b[i] = b[i+1];
	        else b[i] = i;
	    }
	    
	    int q;
	    cin >> q;
	    
	    while(q--){
	        int l, r;
	        cin >> l >> r;
	        
	        if(b[l] >= r) cout << -1 << " " << -1 << endl;
	        else cout << l << " " << b[l]+1 << endl;
	    }
	    
	    cout << endl;
	}
	
	return 0;

}
