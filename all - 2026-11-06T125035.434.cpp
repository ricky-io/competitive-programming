#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    sort(a.begin(), a.end());
	    
	    for(int i=1; i<n; i+=2){
	        cout << a[i] << ' ';
	    }
	    for(int i=0; i<n; i+=2){
	        cout << a[i] << ' ';
	    }
	    
	    cout << '\n';
	    
	}
	

}
