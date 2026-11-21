#include <bits/stdc++.h>
using namespace std;

// b correct approach : 

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long d = y - x;
        long long ans = 0;

        while (k > 0 && x <= d) {
            ans += d % x;

            x++;
            k--;
        }

        ans += d * k;

        cout << ans << '\n';
    }

    return 0;
}