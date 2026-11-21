#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    long long ans = 0;
	    
	    for(int i=0; i<n; i++){
	        long long x;
	        cin>>x;
	        if(ans > x){
	            ans += x;
	        }
	        else ans = x;
	    }
	    cout<<ans<<endl;
	}

}
