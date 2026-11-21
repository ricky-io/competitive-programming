#include <bits/stdc++.h>
using namespace std;

int solve(string s, char first, char second) {
    int n = s.size();

    // Find the last digit (second)
    int pos2 = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == second) {
            pos2 = i;
            break;
        }
    }

    if (pos2 == -1) return INT_MAX;

    // Find the second-last digit (first) to the left of pos2
    int pos1 = -1;
    for (int i = pos2 - 1; i >= 0; i--) {
        if (s[i] == first) {
            pos1 = i;
            break;
        }
    }

    if (pos1 == -1) return INT_MAX;

    // Adjacent swaps required
    int swaps = (n - 1 - pos2) + (n - 2 - pos1);

    return swaps;
}

int main() {
    string s;
    cin >> s;

    int ans = INT_MAX;

    ans = min(ans, solve(s, '0', '0'));
    ans = min(ans, solve(s, '2', '5'));
    ans = min(ans, solve(s, '5', '0'));
    ans = min(ans, solve(s, '7', '5'));

    if (ans == INT_MAX)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}