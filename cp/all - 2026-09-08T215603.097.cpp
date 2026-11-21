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

        if (s[0] == '0') {
            cout << -1 << '\n';
            continue;
        }

        bool possible = true;
        bool needTwo = false;

        for (int i = 1; i < n; i++) {
            if (s[i] == '0' && s[i - 1] == '0') {
                possible = false;
                break;
            }

            if ((s[i - 1] == '+' && s[i] == '-') ||
                (s[i - 1] == '-' && s[i] == '+')) {
                needTwo = true;
            }
        }

        if (!possible)
            cout << -1 << '\n';
        else if (needTwo)
            cout << 2 << '\n';
        else
            cout << 1 << '\n';
    }

    return 0;
}