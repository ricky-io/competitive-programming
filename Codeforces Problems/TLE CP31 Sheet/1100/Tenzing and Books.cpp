#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

signed main() {
    int t;
    cin >> t;
    
    while(t--){
        int n, x;
        cin >> n >> x;
        
        vector<int> a(n), b(n), c(n);

        int ans = 0;

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        for(int i=0; i<n; i++) cin >> c[i];

        for(int i=0; i<n; i++){
            if((x | a[i]) != x) break;
            ans |= a[i];
        }
        for(int i=0; i<n; i++){
            if((x | b[i]) != x) break;
            ans |= b[i];
        }

        for(int i=0; i<n; i++){
            if((x | c[i]) != x) break;
            ans |= c[i];
        }

        if(ans == x) cout << "YES" << '\n';
        else cout << "NO" << '\n'; 
        
    }
    
    return 0;

}
