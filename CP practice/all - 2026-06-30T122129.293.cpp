#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0; int j=0; int k=0; int n = nums1.size(); int m = nums2.size();int c = m+n;
        vector<int> nums3(m+n);
        while(i<n && j<m){
            if(nums1[i] < nums2[j])
                nums3[k++] = nums1[i++];
            else
                nums3[k++] = nums2[j++];
        }        
        while(i<n){
            nums3[k++] = nums1[i++];
        }        
        while(j<m){
            nums3[k++] = nums2[j++];
        }
        double median;
        if(c % 2 != 0) median = nums3[c/2];
        else median =  (nums3[c/2 - 1] +  nums3[c/2]) / 2.0;
        return median;
    }
};

int main() {
	// your code goes here

}
