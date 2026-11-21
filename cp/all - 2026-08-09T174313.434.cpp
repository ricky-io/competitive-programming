#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Odd n is impossible
        if (n % 2 == 1) {
            cout << "NO" << endl;
            continue;
        }

        // Step 1: Sort
        sort(a.begin(), a.end());

        // Step 2: Construct the answer
        vector<int> b(n);

        int i = 0;
        int j = n / 2;

        for (int k = 0; k < n; k++) {
            if (k % 2 == 0) {
                b[k] = a[i++];
            } else {
                b[k] = a[j++];
            }
        }

        // Step 3: Check circularly
        bool ok = true;

        for (int k = 0; k < n; k++) {
            int prev = (k - 1 + n) % n;
            int next = (k + 1) % n;

            if (!((b[k] > b[prev] && b[k] > b[next]) ||
                  (b[k] < b[prev] && b[k] < b[next]))) {
                ok = false;
                break;
            }
        }

        if (!ok) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;

            for (int x : b) {
                cout << x << " ";
            }

            cout << endl;
        }
    }

    return 0;
}