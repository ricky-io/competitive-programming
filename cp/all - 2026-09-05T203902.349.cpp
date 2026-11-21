#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int ans = 0;

    for (int i = 0; i < n; i += k) {
        bool hasJohn = false;

        for (int j = 0; j < k; j++) {
            int owner;
            cin >> owner;

            if (owner == 1) {
                hasJohn = true;
            }
        }

        if (!hasJohn) {
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}