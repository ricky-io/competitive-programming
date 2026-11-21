#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// LEETCODE 875: Koko Eating Bananas


class Solution {
public:

    bool check(int mid, vector<int>& piles, int h){
        int n = piles.size();
        long long cnt = 0;
        for(int i=0; i<n; i++){
            cnt += (piles[i] + mid - 1) / mid; // ceiling division
        }
        if(cnt <= h) return true;
        else return false;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        sort(piles.begin(), piles.end());
        int lo = 1;
        int hi = piles[n-1];
        int ans = -1;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(check(mid, piles, h) == true){
                ans = mid;
                hi = mid - 1;
            }
            else lo = mid+1;
        }
        return ans;
    }
};



int main() {

    int n;
    cin >> n;

    vector<int> piles(n);

    for(int i = 0; i < n; i++) {
        cin >> piles[i];
    }
    
    int h;
    cin>>h;

    Solution obj;

    int result = obj.minEatingSpeed(piles, h);

    cout << result << endl;

    return 0;
}
