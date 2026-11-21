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

        bool same = false;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                same = true;
                break;
            }
        }

        if (same)
            cout << 1 << '\n';
        else
            cout << min(n, 2) << '\n';
    }

    return 0;
}