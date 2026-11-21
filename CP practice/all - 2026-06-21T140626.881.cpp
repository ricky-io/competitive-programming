#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minLights(vector<int>& lights) {
        vector<int> rav = lights;
        int n = lights.size();

        vector<pair<int, int>> intervals;

        for(int i=0; i<n; i++){
            if(lights[i] > 0){
                intervals.push_back({max(0, i-lights[i]), min(n-1, i+lights[i])});
            }
        }

        sort(intervals.begin(), intervals.end());

        long long ans = 0;
        int cov = -1;

        for(auto &[l, r] : intervals){
            if(l > cov + 1){
                int gap = l - cov - 1;
                ans+= (gap + 2)/3;
            }
            cov = max(cov, r);
        }
        if(cov < n-1){
            int gap = n-1-cov;
            ans+= (gap + 2)/3;
        }
        return (int)ans;
    }
};



int main() {
	// your code goes here

}
