#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// LEETCODE 162: Find Peak Element

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int lo = 0;
        int hi = nums.size()-1;
        while(lo < hi){
            int mid = lo + (hi - lo)/2;
            if(nums[mid] > nums[mid+1]){
                hi = mid;
            }
            else {
                lo = mid+1;
            }
        }
        return lo;
    }
};


int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    

    Solution obj;

    int result = obj.findPeakElement(nums);

    cout << result << endl;

    return 0;
}
