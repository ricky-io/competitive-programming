#include <bits/stdc++.h>
using namespace std;


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
	    
	    sort(nums.begin(), nums.end());
	    
	    nums.erase(unique(nums.begin(), nums.end()), nums.end());
	    
	    n = nums.size();
	    
	    int mexx = 0;
	    int curr = 0;
	    
	    for(int i=0; i<n; i++){
	        if (i == 0 || nums[i] != nums[i-1]+1) {
                curr = 0;
	        }
	        curr++;
            mexx = max(mexx, curr);
	    }
	    
	    cout<<mexx<<endl;
	}

}
