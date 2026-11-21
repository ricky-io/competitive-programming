#include <bits/stdc++.h>
using namespace std;
// number of islands BFS by sanket sir;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int cc = 0; // NO. of conneced components
        for(int r=0; r<rows; r++){
            for(int c=0; c<cols; c++){
                if(grid[r][c] == '0'){ 
                    continue; 
                }// water body
                cc++;
                grid[r][c] = '0'; //mark visited
                // bfs
                queue<pair<int, int>> qu;
                qu.push({r, c}); // store src node
                while(not qu.empty()){
                    auto curr = qu.front();
                    qu.pop();
                    int currRow = curr.first;
                    int currCol = curr.second;
                    if(currRow -1 >= 0 and grid[currRow -1][currCol] == '1'){
                        qu.push({currRow-1, currCol}); // up
                        grid[currRow -1][currCol] = '0';
                    }
                    if(currRow +1 < rows and grid[currRow +1][currCol] == '1'){
                        qu.push({currRow+1, currCol}); // down
                        grid[currRow +1][currCol] = '0';
                    }
                    if(currCol -1 >= 0 and grid[currRow][currCol-1] == '1'){
                        qu.push({currRow, currCol-1}); // left
                        grid[currRow][currCol-1] = '0';
                    }
                    if(currCol +1 < cols and grid[currRow][currCol+1] == '1'){
                        qu.push({currRow, currCol+1}); // right
                        grid[currRow][currCol+1] = '0';
                    }
                }
            }
        }
        return cc;
    }
};

// vector<pair<int,int>> dir = {{-1,0}, {1,0}, {0,-1}, {0,1}};

// while (!qu.empty()) {
//     auto [r, c] = qu.front();
//     qu.pop();

//     for (auto [dr, dc] : dir) {
//         int nr = r + dr;
//         int nc = c + dc;

//         if (nr >= 0 && nr < rows &&
//             nc >= 0 && nc < cols &&
//             grid[nr][nc] == '1') {

//             grid[nr][nc] = '0';
//             qu.push({nr, nc});
//         }
//     }
// }




int main() {
	// your code goes here

}
