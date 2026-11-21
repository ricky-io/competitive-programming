#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int even = -1;
        vector<int> odd;

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;

            if (x % 2 == 0 && even == -1)
                even = i;
            else if (x % 2 == 1)
                odd.push_back(i);
        }

        if (even != -1) {
            cout << 1 << '\n';
            cout << even << '\n';
        }
        else if (odd.size() >= 2) {
            cout << 2 << '\n';
            cout << odd[0] << " " << odd[1] << '\n';
        }
        else {
            cout << -1 << '\n';
        }
    }

    return 0;
}