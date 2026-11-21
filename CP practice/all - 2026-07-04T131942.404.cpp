#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin>>q;
	while(q--){
    	 int n;
    	 cin>>n;
    	 vector<string> nums(n);
    	 for(int i=0; i<n; i++) cin>>nums[i];
    	 
    	 int i = 0;
    	 
    	 
    	 int ans = 0;
    	 
    	 while(i < n - 1){
    	     string s = nums[i];
    	     int j = i+1;
    	     while(j < n){
        	     string t = nums[j];
        	     if(s != t){
        	         if(s[0] == t[0] || s[1] == t[1]) ans++;
        	     }
        	     j++;
    	     }
    	     i++;
    	 }
    	 
    	 cout<<ans<<endl;
	}
    return 0;
}