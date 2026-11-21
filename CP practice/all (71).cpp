#include <bits/stdc++.h>
using namespace std;

// Leetcode : 841 --> Keys and rooms 

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> visited;
        queue<int> qu;
        qu.push(0);
        visited.insert(0);
        while(!qu.empty()){
            int curr = qu.front();
            qu.pop();
            for(int neighbour: rooms[curr]){
                if(visited.count(neighbour) == 0){
                    // neighbour not yet visited
                    qu.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }
        
        return visited.size() == room.size();
    }
};

int main() {
	 int rows, cols;
    cin >> rows >> cols;

    // Create 2D vector
    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter matrix elements:\n";

    // Input
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    

}
