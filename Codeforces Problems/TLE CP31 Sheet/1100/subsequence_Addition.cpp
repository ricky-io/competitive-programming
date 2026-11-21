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

        sort(a.begin(), a.end());

        if(a[0] != 1){
            cout << "NO" << '\n';
            continue;
        }

        int sum = 1;
        bool mila = false;
        for(int i=1; i<n; i++){
            if(a[i] > sum){
                cout << "NO" << '\n';
                mila = true;
                break;
            }
            sum += a[i];
        }

        if(!mila){
            cout << "YES" << '\n';
            continue;
        }

         
    } 
    return 0;
}
