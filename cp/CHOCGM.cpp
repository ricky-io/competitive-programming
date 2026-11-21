#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        int sum = 0;
        int odd = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];

            if (a[i] % 2)
                odd++;
        }

        int chocs = 0;

        if (sum % 2 == 0) {
            // Alice starts
            for (int i = 0; i < n; i++) {
                if (a[i] % 2)
                    chocs += a[i] - 1;
                else
                    chocs += a[i];
            }

            // Remaining odd chocolates are taken alternately.
            chocs += odd / 2;
        }
        else {
            // Bob starts.
            // Bob takes all the even parts.
            // Alice eventually gets (odd - 1) / 2 of the remaining 1s.
            chocs = (odd - 1) / 2;
        }

        cout << chocs << endl;
    }
}