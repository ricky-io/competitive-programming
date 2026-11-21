#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

signed main() {
    int t;
    cin >> t;
    
    while(t--){
        int n, c;
        cin >> n >> c;

        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        int lo = 1;
        int hi = INT_MAX;

        bool mila = false;

        while(lo <= hi){
            int mid = lo + (hi - lo)/2;

            int sum_all = 0;

            for(int i=0; i<n; i++){
                sum_all += (a[i] + 2*mid) * (a[i] + 2*mid);
                if(sum_all > c) break;
            }

            if(sum_all == c){
                cout << mid << '\n';
                mila = true;
                break;
            }

            if(sum_all > c) hi = mid-1;
            else lo = mid+1;
        }

         
    } 
    return 0;
}
