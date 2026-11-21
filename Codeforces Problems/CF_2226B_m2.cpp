#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    a = abs(a); b = abs(b);
    return (b==0) ? a : gcd(b, a%b);
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> nums(n);
	    
	    for(int i=0; i<n; i++){
	        cin>>nums[i];
	    }
	    
	    int ans = 0;
	    for(int i=0; i<n-1; i++){
	        if(abs(nums[i] - nums[i+1]) ==  gcd(nums[i], nums[i+1])) ans++;
	    }
	    cout<<ans<<endl;
	   
	}
return 0;
}
