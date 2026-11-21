#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long mn = n;
        long long mx = 2 * n - 1;

        if (k < mn || k > mx) {
            cout << -1 << '\n';
            continue;
        }

        int l = 2 * n - k;
        int d = n;

        vector<vector<int>> grid(d + 1, vector<int>(d + 1, 0));

        for (int r = 1; r <= l; r++)
            grid[r][r] = r;

        for (int r = l + 1; r <= d; r++)
            grid[r][1] = r;

        for (int c = l + 1; c <= d; c++)
            grid[1][c] = d + c - l;

        int nextValue = 2 * d - l + 1;

        for (int r = 1; r <= d; r++) {
            for (int c = 1; c <= d; c++) {
                if (grid[r][c] == 0)
                    grid[r][c] = nextValue++;
            }
        }

        for (int r = 1; r <= d; r++) {
            for (int c = 1; c <= d; c++) {
                cout << grid[r][c] << (c == d ? '\n' : ' ');
            }
        }
    }

    return 0;
}