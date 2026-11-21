#include <bits/stdc++.h>
using namespace std;

const int MOD = 676767677;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum = 0;
	    int gre = -1;
	    for(int i=0; i<n; i++){
	        int x;
	        cin>>x;
	        if(x > 1){
	            sum += x;
	            gre = i;
	        }
	        
	    }
	    int ans = 1;
	    
	    if(gre == -1){
	        ans = 1;
	    } 
	    else if(gre < n-1){
	        ans = sum+1;
	    } 
	    else {
	        ans = sum;
	    }
	    cout<<(ans%MOD)<<endl;
	}
	return 0;

}
