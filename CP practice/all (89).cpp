#include <bits/stdc++.h>
using namespace std;

// surrounded region

class Solution {
public:
    void solve(vector<vector<char>>& board) {

        int n = board.size();
        int m = board[0].size();

        queue<pair<int,int>> q;

        // left boundary
        for(int i=0; i<n; i++) {
            if(board[i][0] == 'O') {
                board[i][0] = 'V';
                q.push({i,0});
            }
        }

        // top boundary
        for(int j=0; j<m; j++) {
            if(board[0][j] == 'O') {
                board[0][j] = 'V';
                q.push({0,j});
            }
        }

        // right boundary
        for(int i=0; i<n; i++) {
            if(board[i][m-1] == 'O') {
                board[i][m-1] = 'V';
                q.push({i,m-1});
            }
        }

        // bottom boundary
        for(int j=0; j<m; j++) {
            if(board[n-1][j] == 'O') {
                board[n-1][j] = 'V';
                q.push({n-1,j});
            }
        }

        vector<pair<int,int>> dir = {
            {-1,0},
            {1,0},
            {0,-1},
            {0,1}
        };

        while(!q.empty()) {

            auto [r,c] = q.front();
            q.pop();

            for(auto &[dr,dc] : dir) {

                int nr = r + dr;
                int nc = c + dc;

                if(nr < 0 || nc < 0 || nr >= n || nc >= m)
                    continue;

                if(board[nr][nc] != 'O')
                    continue;

                board[nr][nc] = 'V';

                q.push({nr,nc});
            }
        }

        // convert
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {

                if(board[i][j] == 'O')
                    board[i][j] = 'X';

                else if(board[i][j] == 'V')
                    board[i][j] = 'O';
            }
        }
    }
};

int main() {
	// your code goes here

}
