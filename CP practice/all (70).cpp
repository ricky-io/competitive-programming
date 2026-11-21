#include <bits/stdc++.h>
using namespace std;

// Leetcode 1791 --> finding star node from a given star graph

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int a = edges[0][0];
        int b = edges[0][1];
        
        int c = edges[1][0];
        int d = edges[1][1];
        
        return (c == a or c == b) ? c : d ;
    }
};

int main() {
	// your code goes here

}
