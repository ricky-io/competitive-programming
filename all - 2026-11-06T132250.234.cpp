#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int m, n;
	    cin >> m >> n;
	    
	    vector<int> sums;
	    
	    while(m--){
	        vector<int> a(n);
	        for(int i=0; i<n; i++) cin >> a[i];
	        
	        int sum = accumulate(a.begin(), a.end(), 0);
	        
	        int sum_forward = 0;
	        
	        for(int i=0; i<n-1; i+=2){
	            int sum1 = a[i] + a[i+1];
	            int sum2 = -a[i] - a[i+1];
	            
	            if(sum2 > sum1) {
	                sum_forward += sum2;
	                //i++;
	            }
	            else sum_forward += sum1;
	        }
	        
	        reverse(a.begin(), a.end());
	        int sum_backward = 0;
	        
	        for(int i=0; i<n-1; i+=2){
	            int sum1 = a[i] + a[i+1];
	            int sum2 = -a[i] - a[i+1];
	            
	            if(sum2 > sum1) {
	                sum_backward += sum2;
	                //i++;
	            }
	            else sum_backward += sum1;
	        }
	        
	        int real_sum = max({sum_backward, sum_forward, sum});
	        
	        sums.push_back(real_sum);
	    }
	    
	    int ans = accumulate(sums.begin(), sums.end(), 0);
	    
	    cout << ans << '\n';
	    
	}
	

}
