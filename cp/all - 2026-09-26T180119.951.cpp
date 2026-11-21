#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, q;
	    cin >> n >> q;
	    
	    vector<int> a(n);
	    vector<int> x(q);
	    
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    for(int i=0; i<q; i++){
	        int b;
	        cin >> b;
	        
	        x[i] = 1 << b;
	    }
	    
	    //sort(x.rbegin(), x.rend());
	    
	    x.erase(unique(x.begin(), x.end()), x.end());
	    
	    for(auto p : x){
	        for(int i=0; i<n; i++){
	            if(a[i] % p == 0) a[i] += (p / 2);
	        }
	    }
	    
	    for(int i=0; i<n; i++){
	        cout << a[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
