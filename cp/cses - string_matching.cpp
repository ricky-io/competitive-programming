#include <bits/stdc++.h>
using namespace std;

// String Algorithims :: String Matching :: KMP Z-function :

int main() {
    string s, p;
    cin >> s >> p;

    int n = s.size();
    int m = p.size();

    // Prefix function of pattern
    vector<int> pi(m);

    for (int i = 1; i < m; i++) {
        int j = pi[i - 1];

        while (j > 0 && p[i] != p[j]) {
            j = pi[j - 1];
        }

        if (p[i] == p[j]) {
            j++;
        }

        pi[i] = j;
    }

    int ans = 0;
    int j = 0;

    // KMP matching
    for (int i = 0; i < n; i++) {

        while (j > 0 && s[i] != p[j]) {
            j = pi[j - 1];
        }

        if (s[i] == p[j]) {
            j++;
        }

        // Complete pattern found
        if (j == m) {
            ans++;

            // Allow overlapping occurrences
            j = pi[j - 1];
        }
    }

    cout << ans << endl;

    return 0;
}