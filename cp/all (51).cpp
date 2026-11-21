#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long p1, p2, q1, q2, r1, r2, s1, s2;
        cin >> p1 >> p2 >> q1 >> q2 >> r1 >> r2 >> s1 >> s2;

        long long dx1 = q1 - p1;
        long long dy1 = q2 - p2;

        long long dx2 = s1 - r1;
        long long dy2 = s2 - r2;

        long long cross = dx1 * dy2 - dy1 * dx2;

        if (cross != 0) {
            cout << "Yes" << endl;
        } else {
            if ((p1 + q1 == r1 + s1) && (p2 + q2 == r2 + s2))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}