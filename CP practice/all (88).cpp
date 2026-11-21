#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int k = -1;
        bool ok = true;

        // all inversions must have same difference
        for(int i = 0; i < n-1; i++) {

            if(a[i] > a[i+1]) {

                int d = a[i] - a[i+1];

                if(k == -1)
                    k = d;
                else if(k != d) {
                    ok = false;
                    break;
                }
            }
        }

        // if no inversion already sorted
        if(k == -1) {
            cout << "YES\n";
            continue;
        }

        // verify valid pattern
        for(int i = 0; i < n-1; i++) {

            if(a[i] < a[i+1] && a[i] + k > a[i+1]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}