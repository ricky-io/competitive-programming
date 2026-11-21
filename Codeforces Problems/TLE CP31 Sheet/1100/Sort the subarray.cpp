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

        vector<int> a(n), b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        int l = -1;
        int r = -1;

        int i=0;

        for(int i=0; i<n; i++){
            if(a[i] != b[i]){
                r = i;
                if(l == -1) l = i;
            }
            
        }

        while(l>0 && b[l-1] <= b[l]) l--;
        while(r<n-1 && b[r+1] >= b[r]) r++; 
        cout << l+1 << ' ' << r+1 << '\n';
         
    } 
    return 0;
}
