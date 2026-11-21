#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    int prev_sum = 0;
    for(int i=0; i<k; i++) prev_sum+=nums[i];
    
    int j = k;
    int min_idx = 0;
    int min_sum = INT_MAX;
    
    for(int i=0; i<n-k; i++){
        int curr_sum = prev_sum + nums[k] - nums[i];
        if(curr_sum < min_sum){
            min_sum = curr_sum;
            min_idx = i+1;
        }
        j++;
    }
    
    cout<<min_idx<<endl;

    return 0;
}