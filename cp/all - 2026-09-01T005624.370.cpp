#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	vector<vector<char>> grid(n, vector<char> (m));
	
	for(int i=0; i<n; i++){
	    for(int j=0; j<m; j++) cin >> grid[i][j];
	}
	
	pair<int, int> start, finish;
	
	for(int i=0; i<n; i++){
	    for(int j=0; j<m; j++){
	        if(grid[i][j] == 'A'){
	            start.first = i;
	            start.second = j;
	        }
	        if(grid[i][j] == 'B'){
	            finish.first = i;
	            finish.second = j;
	        }
	    }
	}
	
	queue<pair<int, int>> q;
	
	vector<vector<pair<int,int>>> parent(n, vector<pair<int, int>> (m, {-1, -1}));
	
	vector<vector<bool>> visited(n, vector<bool> (m, false));
	
    vector<vector<char>> move(n, vector<char>(m));
	
	q.push(start);
	
	visited[start.first][start.second] = true;
	
	int dx[] = {-1, 1, 0, 0};
	int dy[] = {0, 0, -1, 1};
	char dir[] = {'U', 'D', 'L', 'R'};
	
	while(!q.empty()){
	    auto [x, y] = q.front();
	    q.pop();
	    
	    for(int k = 0; k<4; k++){
	        int nx = x + dx[k];
	        int ny = y + dy[k];
	        
	        if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
	        if(grid[nx][ny] == '#' || visited[nx][ny]) continue;
	        
	        visited[nx][ny] = true;
	        parent[nx][ny] = {x, y};
	        move[nx][ny] = dir[k];
	        q.push({nx, ny});
	    }
	}
	
	if(!visited[finish.first][finish.second]){
	    cout << "NO" << endl;
	    return 0;
	}
	
	string path;
	auto curr = finish;
	while(curr != start){
	    path.push_back(move[curr.first][curr.second]);
	    curr = parent[curr.first][curr.second];
	}
	
	reverse(path.begin(), path.end());
	
	cout << "YES" << endl;
    cout << path.size() << endl;;
    cout << path << endl;
	
	return 0;

}
