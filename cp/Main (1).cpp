#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int len = 0;
        int ans = 0;

        for (char c : s) {
            if (c == '#') {
                len++;
            } else {
                ans = max(ans, (len + 1) / 2);
                len = 0;
            }
        }

        ans = max(ans, (len + 1) / 2);

        cout << ans << '\n';
    }
}