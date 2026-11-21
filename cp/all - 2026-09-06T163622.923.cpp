#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int L = -1, R = -1;

        // First non-zero
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                L = i;
                break;
            }
        }

        // No non-zero elements
        if (L == -1) {
            cout << 0 << '\n';
            continue;
        }

        // Last non-zero
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] != 0) {
                R = i;
                break;
            }
        }

        // Is there a zero between them?
        bool hasZero = false;

        for (int i = L; i <= R; i++) {
            if (a[i] == 0) {
                hasZero = true;
                break;
            }
        }

        if (hasZero)
            cout << 2 << '\n';
        else
            cout << 1 << '\n';
    }
}