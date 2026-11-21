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
	    
	    long long ans = 0;
	    
	    for(int k=1; k<=n; k++){
	        
	        if(n % k != 0) continue;
	    
	        long long mx = LLONG_MIN;
	        long long mn = LLONG_MAX;
	    
	        for(int i=0; i<n; i+=k){
	            long long sum = 0;
	        
	            for(int j=i; j<i+k; j++){
	                sum += a[j];
	            }
	        
	            mx = max(mx, sum);
	            mn = min(mn, sum);
	        
	        }
	        ans = max(ans, mx-mn);
	    }
	    
	    cout << ans << endl;
	    
	}

}
