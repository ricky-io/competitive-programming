#include <bits/stdc++.h>
using namespace std;

int calc(string s, char x, char y) {
    int n = s.size();
    int ans = INT_MAX;

    // Try every occurrence of y (last digit)
    for (int j = n - 1; j >= 0; j--) {
        if (s[j] != y) continue;

        string t = s;
        int cur = 0;

        // Move y to the last position
        for (int k = j; k < n - 1; k++) {
            swap(t[k], t[k + 1]);
            cur++;
        }

        // Find x to the left of the last position
        int pos = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (t[i] == x) {
                pos = i;
                break;
            }
        }

        if (pos == -1) continue;

        // Move x to second last
        for (int k = pos; k < n - 2; k++) {
            swap(t[k], t[k + 1]);
            cur++;
        }

        ans = min(ans, cur);
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    int ans = INT_MAX;

    ans = min(ans, calc(s, '0', '0'));
    ans = min(ans, calc(s, '2', '5'));
    ans = min(ans, calc(s, '5', '0'));
    ans = min(ans, calc(s, '7', '5'));

    if (ans == INT_MAX)
        cout << -1;
    else
        cout << ans;
}