#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        unordered_set<char> sets;
        int left = 0;
        int ans = 0;

        for(int right = 0; right < n; right++) {

            while(sets.count(s[right])) {
                sets.erase(s[left]);
                left++;
            }

            sets.insert(s[right]);

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};


int main() {
	// your code goes here

}
