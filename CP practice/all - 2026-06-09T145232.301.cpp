#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// LEETCODE 2187: Minimum Time to Complete Trips

class Solution {
public:

    bool check(long long mid, vector<int>& time, int totalTrips){
        int n = time.size();
        long long cnt = 0;
        for(int i=0; i<n; i++){
            
            cnt += mid / time[i];
            if(cnt >= totalTrips) return true;

        }
        return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();

        long long mn = *min_element(time.begin(), time.end());

        long long lo = 1;

        long long hi = mn * 1LL * totalTrips;

        long long ans = -1;
        while(lo <= hi){
            long long mid = lo + (hi - lo)/2;
            if(check(mid, time, totalTrips) == true){
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid+1;
            }
        }
        return ans;
    }
};



int main() {

    int n;
    cin >> n;

    vector<int> time(n);

    for(int i = 0; i < n; i++) {
        cin >> time[i];
    }
    
    int totalTrips;
    cin>>totalTrips;

    Solution obj;

    int result = obj.minimumTime(time, totalTrips);

    cout << result << endl;

    return 0;
}
