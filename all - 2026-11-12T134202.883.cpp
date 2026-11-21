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
	    
	    int negs = 0;
	    int sum = 0;
	    int mn = INT_MAX;
	    
	    vector<int> a(n);
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	        if(a[i] < 0) negs++;
	        mn = min(mn, abs(a[i]));
	        sum += abs(a[i]);
	    } 
	    
	    if(negs % 2){
	        sum -= 2*mn;
	    }
	    
	    cout << sum << '\n';
	}

}
