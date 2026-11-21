#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        // go right to left; state = weight above in bag A (bag B = S - sA)
        int S = 0;
        vector<char> dp(1, 1);
        for (int i = n - 1; i >= 0; i--) {
            bool glass = (s[i] == 'G');
            int w = glass ? 1 : 2;
            vector<char> nxt(S + w + 1, 0);
            for (int sA = 0; sA <= S; sA++) {
                if (!dp[sA]) continue;
                int sB = S - sA;
                if (!glass || sA <= k) nxt[sA + w] = 1;  // put in bag A
                if (!glass || sB <= k) nxt[sA] = 1;      // put in bag B
            }
            dp.swap(nxt);
            S += w;
        }
        bool ok = false;
        for (char v : dp) if (v) ok = true;
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}
