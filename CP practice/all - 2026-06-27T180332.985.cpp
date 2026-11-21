#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> grid(h);
    for (int i = 0; i < h; i++)
        cin >> grid[i];

    int t = 0, b = h - 1;
    int l = 0, r = w - 1;

    // Remove top rows
    while (true) {
        bool allWhite = true;
        for (int j = 0; j < w; j++) {
            if (grid[t][j] == '#') {
                allWhite = false;
                break;
            }
        }
        if (!allWhite) break;
        t++;
    }

    // Remove bottom rows
    while (true) {
        bool allWhite = true;
        for (int j = 0; j < w; j++) {
            if (grid[b][j] == '#') {
                allWhite = false;
                break;
            }
        }
        if (!allWhite) break;
        b--;
    }

    // Remove left columns
    while (true) {
        bool allWhite = true;
        for (int i = t; i <= b; i++) {
            if (grid[i][l] == '#') {
                allWhite = false;
                break;
            }
        }
        if (!allWhite) break;
        l++;
    }

    // Remove right columns
    while (true) {
        bool allWhite = true;
        for (int i = t; i <= b; i++) {
            if (grid[i][r] == '#') {
                allWhite = false;
                break;
            }
        }
        if (!allWhite) break;
        r--;
    }

    for (int i = t; i <= b; i++) {
        for (int j = l; j <= r; j++)
            cout << grid[i][j];
        cout << '\n';
    }

    return 0;
}