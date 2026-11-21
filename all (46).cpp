
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        int d;
        cin >> n >> d;

        while (true) {
            string s = to_string(n);
            bool found = false;

            for (int i = 0; i < (int)s.size(); i++) {
                if (s[i] - '0' == d) {
                    found = true;

                    if (d == 0) {
                        s[i] = '1';
                    } else {
                        s[i]++;
                        while (s[i] - '0' == d) {
                            s[i]++;
                        }
                    }

                    for (int j = i + 1; j < (int)s.size(); j++) {
                        s[j] = (d == 0 ? '1' : '0');
                    }

                    n = stoll(s);
                    break;
                }
            }

            if (!found) break;
        }

        cout << n << '\n';
    }

    return 0;
}
