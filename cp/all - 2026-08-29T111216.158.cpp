#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k, q;
        cin >> n >> k >> q;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long best = 0;
        long long curr = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] <= q) {
                curr++;
            } 
            else {
                if (curr >= k) {
                    best += (curr - k + 1) * (curr - k + 2) / 2;
                }
                curr = 0;
            }
        }

        if (curr >= k) {
            best += (curr - k + 1) * (curr - k + 2) / 2;
        }

        cout << best << endl;
    }

    return 0;
}
