#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int ans = -1;

        if (x1 == x2 && y1 == y2)
            ans = 0;
        else if ((x1 + y1 == x2 + y2) || (x1 - y1 == x2 - y2))
            ans = 1;
        else if ((x1 + y1) % 2 == (x2 + y2) % 2)
            ans = 2;

        cout << ans << endl;
    }
}
