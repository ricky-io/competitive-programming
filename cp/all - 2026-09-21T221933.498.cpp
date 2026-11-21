#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a;
        cin >> a;

        // Already sorted
        bool sorted = true;

        for (int i = 1; i < n; i++) {
            if (a[i - 1] > a[i]) {
                sorted = false;
                break;
            }
        }

        if (sorted) {
            cout << 0 << '\n';
            continue;
        }

        char OR = a[0];
        int cnt = 0;

        for (int i = 1; i < n - 1; i++) {
            if (OR != a[i]) {
                if (a[i] == '0') {
                    cnt++;
                }
                else if (a[i + 1] == '0') {
                    cnt++;
                }
                else {
                    OR = '1';
                }
            }
        }

        if (a[n - 1] != OR)
            cnt++;

        cout << cnt << '\n';
    }
}
