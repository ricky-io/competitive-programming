#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        map<string, int> freq;
        long long ans = 0;

        while (n--) {
            string s;
            cin >> s;

            for (char c = 'a'; c <= 'k'; c++) {
                string t = s;
                t[0] = c;
                if (t != s)
                    ans += freq[t];
            }
            
            for (char c = 'a'; c <= 'k'; c++) {
                string t = s;
                t[1] = c;
                if (t != s)
                    ans += freq[t];
            }

            freq[s]++;
        }

        cout << ans << '\n';
    }
}