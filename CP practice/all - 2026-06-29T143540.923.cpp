#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0;
        int j = n-1;
        int Max = 0;
        while(i<j){
            int smax = min(height[i], height[j]) * (j-i);
            Max = max(smax, Max);
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        return Max;
    }
};

int main() {
	// your code goes here

}
