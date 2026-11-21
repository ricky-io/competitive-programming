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

        int best = a[0];
        int curr = a[0];
        

        for (int i = 1; i < n; i++) {
            if((abs(a[i]) % 2) != (abs(a[i-1]) % 2)) {
                curr = max(a[i] , curr + a[i]);
            }
            
            else curr = a[i];
            
            best = max(curr, best);
        }

        cout << best << endl;
    }

    return 0;
}
