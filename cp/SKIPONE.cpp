#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        vector<int> a(n);
        
        for(int i=0; i<n; i++) cin >> a[i];

        int ans = 0;
        long long sum = 0;
        long long mx = 0;
        
        for (int i = 0; i < n; i++) {
            sum += a[i];
            mx = max(mx, (long long)a[i]);
        
            if (sum - mx <= k)
                ans = i + 1;
            else
                break;
        }

        cout << ans << endl;
    }
}