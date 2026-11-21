#include <bits/stdc++.h>
using namespace std;

// Binary search leetcode 704

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0;
        int hi = n-1;
        int idx = -1;
        bool flag = false;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid] == target){ 
                idx = mid;
                flag = true; 
                break;
        }
        else if(nums[mid] < target) lo = mid+1;
        else if(nums[mid] > target) hi = mid-1;
        }
    if(flag != true) return -1;
    else return idx;    
    } 
};

int main() {
	// your code goes here

}
