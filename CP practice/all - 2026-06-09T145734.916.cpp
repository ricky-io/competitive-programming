#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// LEETCODE 34: Find First and Last Position of Element in Sorted Array


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0; int hi = n-1; int first = -1; int last = -1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid] >= target) hi = mid-1;
            else lo = mid+1;
            if(nums[mid] == target) first = mid;
        }
        lo = 0; hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi -lo)/2;
            if(nums[mid] <= target) lo = mid+1;
            else hi = mid-1;
            if(nums[mid] == target) last = mid;
        }   
        return {first, last};
    }
};


int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int target;
    cin>>target;

    Solution obj;

    vector<int> result = obj.searchRange(nums, target);

    cout << result << endl;

    return 0;
}
