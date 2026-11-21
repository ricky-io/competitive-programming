#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {

        long long p1, p2, q1, q2;
        long long r1, r2, s1, s2;

        cin >> p1 >> p2 >> q1 >> q2;
        cin >> r1 >> r2 >> s1 >> s2;

        long long dx1 = q1 - p1;
        long long dy1 = q2 - p2;

        long long dx2 = s1 - r1;
        long long dy2 = s2 - r2;

        long long cross = dx1 * dy2 - dy1 * dx2;

        if (cross != 0) {
            cout << "Yes\n";
            continue;
        }

        long long mx1 = p1 + q1;
        long long my1 = p2 + q2;

        long long mx2 = r1 + s1;
        long long my2 = r2 + s2;

        long long vx = mx2 - mx1;
        long long vy = my2 - my1;

        long long dot = vx * dx1 + vy * dy1;

        if (dot == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}