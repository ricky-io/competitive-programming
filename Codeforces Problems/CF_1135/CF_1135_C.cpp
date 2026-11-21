#include <bits/stdc++.h>
using namespace std;


#define int long long
const int MOD = 1e9 + 7;

int power(int a, int b){
    int res = 1;
    while(b > 0){
        if(b&1){
            res = res * a % MOD;
        }
        
        a = a * a % MOD;
        b >>= 1;
    }
    
    return res;
}

signed main() {
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        map<int, int, greater<int>> mp;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }
        
        int ans = 1;
        int m = 0;
        
        for(auto &[val, cnt] : mp){
            if(cnt > 1) break;
            m++;
            ans = (ans + power(val - 1, m))%MOD;
        }
        
        cout << ans << '\n';
    }
    
    return 0;

}
