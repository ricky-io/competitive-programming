#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int64 X, Y, K;
        cin >> X >> Y >> K;

        int64 ans = 0;

        while (X != Y) {
            if (X > Y)
                X /= K;
            else
                Y /= K;
            ans++;
        }

        cout << ans << '\n';
    }
}