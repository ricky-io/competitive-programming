#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    int prev_sum = 0;
    for(int i=0; i<k; i++) prev_sum += nums[i];
    
    int min_sum = prev_sum;
    int min_idx = 0;
    
    for(int i=1; i<=n-k; i++){
        prev_sum = prev_sum - nums[i-1] + nums[i+k-1];
        if(prev_sum < min_sum){
            min_sum = prev_sum;
            min_idx = i;
        }
    }
    
    cout<<min_idx + 1<<endl;

    return 0;
}