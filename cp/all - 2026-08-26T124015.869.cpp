#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        
        vector<int> a(n + 1);
        vector<int> b(n + 1, 0);
        
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            b[i] = max(b[i - 1], x);
        }
        
        long long sum = 0;
        long long ans = 0;

        for (int i = 1; i <= min(n, q); i++) {

            sum += a[i];

            long long current =
                sum + 1LL * (q - i) * b[i];

            ans = max(ans, current);
        }

        cout << ans << endl;
    }
}