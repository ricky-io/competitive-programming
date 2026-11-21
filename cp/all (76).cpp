#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    long long ans = 0;

    // Odd length substrings
    for (int center = 0; center < n; center++) {
        int mismatch = 0;

        for (int l = center, r = center; l >= 0 && r < n; l--, r++) {
            if (s[l] != s[r])
                mismatch++;

            if (mismatch > 1)
                break;

            ans++;
        }
    }

    // Even length substrings
    for (int center = 0; center < n - 1; center++) {
        int mismatch = 0;

        for (int l = center, r = center + 1; l >= 0 && r < n; l--, r++) {
            if (s[l] != s[r])
                mismatch++;

            if (mismatch > 1)
                break;

            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}