#include <bits/stdc++.h>
using namespace std;

// Binary search leetcode 34 -> binary search first and last occurences : 

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
	// your code goes here

}
