#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            p[i] = i + 1;
        }

        // Reverse prefixes
        for (int i = 1; i <= n - 1; i++) {
            reverse(p.begin(), p.begin() + i + 1);
        }

        for (int x : p) cout << x << " ";
        cout << "\n";
    }
    return 0;
}

