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
	    
	    int sum = std::accumulate(a.begin(), a.end(), 0);
	    
	    for(int i=1; i<n; i++){
	        int curr = -a[i] - a[i-1] - a[i] - a[i-1];
	        
	        if(sum + curr >= sum){
	            sum += curr;
	            a[i] = -a[i-1];
	        }
	    }
	    
	    cout << sum << '\n';
	}

}
