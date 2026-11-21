#include <bits/stdc++.h>
using namespace std;

int main() {
	int h; int w;
	cin>>h>>w;
	
vector<vector<<char>> grid(h, vector<char> (w, '.'));

int min_i = INT_MAX; int min_j = INT_MAX; int max_i = INT_MIN; int max_j = INT_MIN;

for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
        cin>>grid[i][j];
        if(grid[i][j] == '#'){
            min_i = min(min_i, i);
            min_j = min(min_j, j);
            max_i = max(max_i, i);
            max_j = max(max_j, j);
        }
    }
}

int row = max_i - min_i;
int col = max_j - max_i;



}
