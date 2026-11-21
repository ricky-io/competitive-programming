#include <bits/stdc++.h>
using namespace std;

int rottings(vector<vector<int>> &grid){
    int m = grid.size();
    int n = grid[0].size();
    
    queue<pair<int, int>> q;
    int fresh = 0;
    
    for(int i=0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(grid[i][j] == 2) q.push({i, j});
            else if(grid[i][j] == 1) fresh++;
        }
    }
    
    if(fresh == 0) return 0;
    
    int mins = 0;
    
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    
    while(!q.empty() && fresh > 0){
        int sz = q.size();
        while(sz--){
            auto [x, y] = q.front();
            q.pop();
            
            for(int k =0; k<4; k++){
                int nx = x + dx[k];
                int ny = y + dy[k];
                
                if(nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] == 1){
                    grid[nx][ny] = 2;
                    fresh--;
                    q.push({nx, ny});
                }
            }
        }
        mins++;
    }
    return (fresh == 0) ? mins : -1;
}

int main() {
	// your code goes here
	int m, n;
	cin>>m>>n;
	
	vector<vector<int>> grid(m, vector<int>(n));
	for(int i=0; i<m; i++){
	    for(int j=0; j<n; j++){
	        cin>>grid[i][j];
	    }
	}
	
	int ans = rottings(grid);
	
	cout<<ans<<endl;
	
	return 0;

}
