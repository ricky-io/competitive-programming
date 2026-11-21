#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

signed main() {
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        int mx = 0;

        for(int i=0; i<n; ++i){
            mx = __gcd(mx, abs(a[i] - a[n - i - 1]));
        }

        cout << mx << '\n';
        
    }
    
    return 0;

}
