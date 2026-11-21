#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int L = -1, R = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                if (L == -1) L = i;
                R = i;
            }
        }

        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                cout << 1;
            } else if (a[i] == -1) {
                cout << ((i == L || i == R) ? 1 : 0);
            } else {
                cout << 0;
            }
            if (i != n - 1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}