#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        long long sumSecond = 0;
        int globalMin = INT_MAX;
        int smallestSecond = INT_MAX;

        for (int i = 0; i < n; i++) {

            int m;
            cin >> m;

            int mn = INT_MAX;
            int smn = INT_MAX;

            for (int j = 0; j < m; j++) {

                int x;
                cin >> x;

                if (x <= mn) {
                    smn = mn;
                    mn = x;
                }
                else if (x < smn) {
                    smn = x;
                }
            }

            globalMin = min(globalMin, mn);
            smallestSecond = min(smallestSecond, smn);
            sumSecond += smn;
        }

        long long ans = sumSecond - smallestSecond + globalMin;

        cout << ans << endl;
    }
}