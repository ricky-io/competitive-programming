#include <bits/stdc++.h>
using namespace std;

const int MOD = 676767677;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int> a(n);
	    
	    int sum = 0;
	    int last_greater = -1;
	    
	    for(int i=0; i<n; i++){
	        cin>>a[i];
    	        if(a[i] > 1){
    	            sum += a[i];
    	            last_greater = i;
    	        }
	    }
	    
	    long long ans;
	    
	    if(last_greater == -1){
	        ans = 1;
	    } 
	    else if(last_greater < n-1){
	        ans = sum + 1;
	    }
	    else ans = sum ;
	    
	    cout<<(ans % MOD)<<endl;
	}

}
