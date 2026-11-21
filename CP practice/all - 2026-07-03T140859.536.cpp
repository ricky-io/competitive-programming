#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin>>q;
	while(q--){
    	 int n;
    	 cin>>n;
    	 vector<int> nums(n);
    	 for(int i=0; i<n; i++) cin>>nums[i];
    	 
    	 bool allodd = true;
    	 bool alleven = true;
    	 
    	 bool oddidx_odd = true;
    	 bool oddidx_even = true;
    	 
    	 bool evenidx_odd = true;
    	 bool evenidx_even = true;
    	 
    	 for(int i=0; i<n; i++){
    	     if(nums[i]%2 != 0) alleven = false;
    	     else allodd = false;
    	 }
    	 for(int i=0; i<n; i+=2){
    	     if(nums[i]%2 != 0) evenidx_even = false;
    	     else evenidx_odd = false;
    	 }
    	 for(int i=1; i<n; i+=2){
    	     if(nums[i]%2 != 0) oddidx_even = false;
    	     else oddidx_odd = false;
    	 }
    	 
    	 bool ans = false;
    	 
    	 if(allodd || alleven) ans = true;
    	 else if(oddidx_odd && evenidx_even || oddidx_even && evenidx_odd) ans = true;
    	 else ans = false;
    	 
    	 if(ans) cout<<"Yes"<<endl;
    	 else cout<<"No"<<endl;
    	 
    	 
    	 
    	 
    
	}
    return 0;
}
