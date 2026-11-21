#include <bits/stdc++.h>
using namespace std;

int n, m;

void dfs(int nr, int nc, vector<vector<char>> &grid){
    
    vector<int> dr = {-1,1,0,0};
    vector<int> dc = {0,0,-1,1};
    
    for (int k = 0; k < 4; k++){
        int row = nr + dr[k];
        int col = nc + dc[k];
        if(row > 0 && col > 0 && row < n && col < m && grid[row][col] == '.') {
            grid[row][col] = '#';
            dfs(row, col, grid);
        }
    }
}

int main() {
	// your code goes here

    cin>>n>>m;
    
    vector<vector<char>> grid(n, vector<char> (m));
    
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) cin>>grid[i][j];
        
    int rooms_count = 0;
    vector<bool> visit(n+1, false);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j]=='.'){
                dfs(i, j, grid);
                rooms_count++;
            }   
        }
        
    }
    cout<<rooms_count<<endl;
    
    return 0;
}
