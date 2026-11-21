#include <bits/stdc++.h>
using namespace std;

// Travelling Salesman Problem :: 

int grid[10][10];
int dp[10][(1<<10)];

int tsp(int curr, int mask, int n) {
    if(mask == (1<<n) - 1) {
        return grid[curr][0];
    }

    if(dp[curr][mask] != -1) return dp[curr][mask];

    int ans = INT_MAX;
    for(int neigh = 0; neigh < n; neigh++) {
        if((mask & (1 << neigh)) == 0) {
            ans = min(ans, grid[curr][neigh] + tsp(neigh, mask | (1 << neigh), n));
        }
    }

    return dp[curr][mask] = ans;
}

int main() {
    int n;
    cout << "Enter number of cities: ";
    cin >> n;

    cout << "Enter the " << n << "x" << n << " cost matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    memset(dp, -1, sizeof(dp));

    cout << "Minimum cost: " << tsp(0, 1, n) << endl;

    return 0;
}
