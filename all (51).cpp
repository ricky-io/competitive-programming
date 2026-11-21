#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    vector<int> a(n, -1);
	    vector<int> f(n, -1);
	    
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	        if(a[i] == i){
	            f[i] = i+1;
	        }
	        else if(f[a[i]] == i){
	            f[i] = min(i+2, n);
	        }
	    }
	    
	    int kth = -1;
	    sort(f.rbegin(), f.rend());
	    kth = f[k-1];
	    
	    if(f[k] == n-k) {
	        cout << -1 << endl;
	        continue;
	    }
	    
	    int mn = INT_MAX;
	    int mni = -1;
	    int mxi = -1;
	    int mx = INT_MIN;
	    for(int i=k; i<n; i++){
	        if(mn > a[i]){
	            mn = a[i];
	            mni = i+1;
	            
	        }
	    }
	    for(int i=0; i<k; i++){
	        if(mx < a[i]){
	            mx = a[i];
	            mxi = i+1;
	        }
	    }
	    
	    cout << mni << ' ' << mxi << endl;
	}

}
