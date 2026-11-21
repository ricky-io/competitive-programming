#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n; int k;
	    cin>>n>>k;
	    bool ans = true;
	    if(n%2 != 0 && k%2==0) ans = false;
	    if(n<k) ans = false;
	    vector<int> nums(k, 1);
	    if(ans){
	        int r = n%k;
	        if(r%2 == 0){ // even -> answers odd
                for(int i=0; i<k-1; i++){
                    nums[i] = 1;
                    n--;
                }
                if(n%2 == 0 || n<0) {
                    ans = false;
                    nums.clear();
                }
                nums[k-1] = n;
                
	        } else {
	            for(int i=0; i<k-1; i++){
                    nums[i] = 2;
                    n-=2;
                }
                if(n%2 != 0 || n<0) {
                    ans = false;
                    nums.clear();
                }
                nums[k-1] = n;
	        }
	    }
	    if(!ans) cout<<"No"<<endl;
	    else {
	        cout<<"Yes"<<endl;
	        for(auto x : nums) cout<<x<<" ";
	        cout<<endl;
	    }
	    return 0;
	}

}
