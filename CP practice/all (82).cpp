#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

// word search :: 

    bool f(vector<vector<char>>& board,
           string &word,
           int n,
           int m,
           int i,
           int j,
           int idx) {

        // word completely found
        if(idx == word.length()) {
            return true;
        }

        // boundary + mismatch check
        if(i < 0 || j < 0 || i >= n || j >= m ||
           board[i][j] != word[idx]) {
            return false;
        }

        // store original char
        char temp = board[i][j];

        // mark visited
        board[i][j] = '#';

        // traverse in all 4 directions
        bool ans =
            f(board, word, n, m, i+1, j, idx+1) ||
            f(board, word, n, m, i-1, j, idx+1) ||
            f(board, word, n, m, i, j+1, idx+1) ||
            f(board, word, n, m, i, j-1, idx+1);

        // backtrack
        board[i][j] = temp;

        return ans;
    }

    bool exist(vector<vector<char>>& board, string word) {

        int n = board.size();
        int m = board[0].size();

        for(int i=0; i<n; i++) {

            for(int j=0; j<m; j++) {

                // start dfs if first char matches
                if(board[i][j] == word[0]) {

                    if(f(board, word, n, m, i, j, 0)) {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};
int main() {
	// your code goes here

}
