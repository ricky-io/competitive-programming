#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i];
        
        //int maxi = std::max_element(nums.begin(), nums.end());
        int smax = INT_MIN;
        
        for(int i=0; i<n-1; i++){
            smax= max(smax, min(nums[i], nums[i+1]));
        }
        
        cout<<smax<<endl;
        
        
    }
}
