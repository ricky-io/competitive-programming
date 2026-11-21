#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        ll totalDigits = 0;
        vector<int> zeros;

        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;

            // Count total digits
            ll temp = x;
            while (temp > 0) {
                totalDigits++;
                temp /= 10;
            }

            // Count trailing zeros
            int z = 0;
            while (x % 10 == 0) {
                z++;
                x /= 10;
            }

            zeros.push_back(z);
        }

        sort(zeros.rbegin(), zeros.rend());

        for (int i = 0; i < n; i += 2) {
            totalDigits -= zeros[i];
        }

        if (totalDigits > m)
            cout << "Sasha\n";
        else
            cout << "Anna\n";
    }
}