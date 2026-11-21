#include <bits/stdc++.h>
using namespace std;

int solve(string s, string target) {
    int n = s.size();
    int ans = 0;

    // Move last digit
    int pos = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == target[1]) {
            pos = i;
            break;
        }
    }

    if (pos == -1) return INT_MAX;

    while (pos < n - 1) {
        swap(s[pos], s[pos + 1]);
        pos++;
        ans++;
    }

    // Move second last digit
    pos = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == target[0]) {
            pos = i;
            break;
        }
    }

    if (pos == -1) return INT_MAX;

    while (pos < n - 2) {
        swap(s[pos], s[pos + 1]);
        pos++;
        ans++;
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    int ans = INT_MAX;

    ans = min(ans, solve(s, "00"));
    ans = min(ans, solve(s, "25"));
    ans = min(ans, solve(s, "50"));
    ans = min(ans, solve(s, "75"));

    if (ans == INT_MAX)
        cout << -1;
    else
        cout << ans;
}