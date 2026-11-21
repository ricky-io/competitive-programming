#include <bits/stdc++.h>
using namespace std;


int main() {
	int n, m;
	cin >> n >> m;
	
	vector<vector<char>> labyrinth(n, vector<char> (m));
	
	for(int i=0; i<n; i++){
	    for(int j=0; j<m; j++){
	        cin >> labyrinth[i][j];
	    }
	}
	
	pair<int, int> start;
	std::queue<pair<int, int>> end;
	
	for(int i=0; i<n; i++){
	    for(int j=0; j<m; j++){
	        if(labyrinth[i][j] == 'A'){
	            start.first = i;
	            start.second = j;
	        }
	        
	        if((i == n-1 || j == m-1 || i == 0 || j == 0) && labyrinth[i][j] == '.'){
	            end.push({i, j});
	        }
	    }
	}
	
	queue<pair<int, int>> q;
	vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>> (m, {-1, -1}));
	vector<vector<char>> move(n, vector<char> (m));
	vector<vector<bool>> visited(n, vector<bool> (m, false));
	
	
	while(!end.empty()){
	    q.push({start.first, start.second});
	    visited[start.first][start.second] = true;
	    
	    pair<int, int> finish = end.front();
	    end.pop();
	    
	    while(!q.empty()){
	        auto &[x, y] = q.front();
	        q.pop();
	        
	        int dx[] = {-1, 1, 0, 0};
	        int dy[] = {0, 0, 1, -1};
	        
	        char dir[] = {'U', 'D', 'R', 'L'};
	        
	        for(int k=0; k<4; k++){
	            int nx = x + dx[k];
	            int ny = y + dy[k];
	            
	            if(nx < 0 || ny < 0 || nx >= n || ny >= m || labyrinth[nx][ny] == 'M') continue;
	            if(labyrinth[nx][ny] == '#' || visited[nx][ny]) continue;
	            
	            visited[nx][ny] = true;
	            parent[nx][ny] = {x, y};
	            move[nx][ny] = dir[k];
	            q.push({nx, ny});
	        }
	    }
	    
	    if(visited[finish.first][finish.second]){
	        cout << "YES" << '\n';
	        
	        string path;
	        auto curr = finish;
	        while(curr != start){
	            path.push_back(move[curr.first][curr.second]);
	            curr = parent[curr.first][curr.second];
	        }
	        
	        reverse(path.begin(), path.end());
	        cout << path.size() << '\n';
	        cout << path << '\n';
	        
	        return 0;
	    }
	}
	
	cout << "NO" << '\n';
	
	return 0;

}
