#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n, k;
    cin >> n >> k;

    long long x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<long long> nums(n);

    nums[0] = x;

    for (int i = 1; i < n; i++) {
        nums[i] = (a * nums[i - 1] + b) % c;
    }

    deque<int> dq;
    long long result = 0;
    
    for(int i=0; i<n; i++){
        while(!dq.empty() && dq.front() <= i-k){
            dq.pop_front();
        }
        
        while(!dq.empty() && nums[dq.back()] >= nums[i]){
            dq.pop_back();
        }
        
        dq.push_back(i);
        
        if(i >= k-1){
            long long minimum = nums[dq.front()];
            result ^= minimum;
        }
    }
    
    cout << result << "\n";
    
    return 0;
}