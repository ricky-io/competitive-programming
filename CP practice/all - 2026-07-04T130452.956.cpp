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
    	 
    	 int i = 0;
    	 int j = n-1;
    	 
    	 int max_ans = 0;
    	 int ans = 0;
    	 int w1 = 0;
    	 int w2 = 0;
    	 
    	 while(i <= j){
    	     if(w1 <= w2){
    	         
    	         w1 += nums[i];
    	         ans++;
    	         i++;
    	     }
    	     
    	     else{
    	         w2 += nums[j];
    	         ans++;
    	         j--;
    	         
    	     }
    	     if(w1 == w2){
    	         max_ans = ans;
    	     }
    	 }
    	 cout<<max_ans<<endl;
	}
    return 0;
}
