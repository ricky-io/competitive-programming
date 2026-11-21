#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// LEETCODE 74: Search a 2D Matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(); int lo = 0; int hi = n-1; int m = matrix[0].size();
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(target >= matrix[mid][0] && target <= matrix[mid][m-1]){
                int l = 0;
                int h = m-1;
                while(l<=h){
                    int mid2 = l + (h - l)/2;
                    if(matrix[mid][mid2] == target) return true;
                    else if(matrix[mid][mid2] > target) h = mid2 - 1;
                    else l = mid2 + 1;
                }
            return false;
            }
            else if(matrix[mid][0] > target) hi = mid - 1;
            else lo = mid + 1;
        }
        return false;
    }
};

int main() {

    int n;
    cin >> n;
    int m;
    cin >> m;

    vector<vector<int>> matrix(n, vector<int> (m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    
    

    Solution obj;

    bool result = obj.searchMatrix(matrix, target);

    cout << result << endl;

    return 0;
}
