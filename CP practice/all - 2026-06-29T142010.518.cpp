#include <bits/stdc++.h>
using namespace std;

// Binary search leetcode 1011 -> capacity to chip containers with in d days:

class Solution {
public:

    bool check(int mid, vector<int>& weights, int days){
        int n = weights.size();
        int m = mid;
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(m >= weights[i]){
                m-=weights[i];
            }
            else {
                cnt++;
                m=mid;
                m-=weights[i];
            }
        }
        cnt+=1;
        if(cnt>days) return false;
        else return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();

        int lo = *max_element(weights.begin(), weights.end());
        int hi = accumulate(weights.begin(), weights.end(), 0);
        
        int ans = 0;
        while(lo<=hi){
            int mid = lo + (hi - lo)/2;
            if(check(mid, weights, days) == true){
                ans = mid;
                hi = mid-1;
            } else {
                lo = mid+1;
            }
        }
        return ans;
    }
};

int main() {
	// your code goes here

}
