#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> a(n+1);
        
        for(int i=1; i<=n; i++){
            int x;
            cin >> x;
            
            a[i] = (1LL << x);
        } 
        
        sort(a.begin(), a.end());
        vector<int> pref(n+1, 0LL);
        vector<int> suf(n+2, 0LL);
        
        for(int i=1; i<=n; i++){
            pref[i] = pref[i-1] + a[i];
        }
        
        for(int i=n; i>=1; i--){
            suf[i] = suf[i+1] + a[i];
        }
        
        int best = INT_MIN;
        
        for(int i=1; i<=n; i++){
            int curr = pref[i] * suf[i+1];
            
            best = max(curr, best);
        }
        
        cout << best << '\n';
        
        // int h = 0;
        // int b = 0;
        
        // for(int i=1; i<=n; i++){
        //     if(i%2){
        //         b += (1LL << a[i]);
        //     }
        //     else h += (1LL << a[i]);
        // }
        
        // int ans = b * h;
        
        // cout << ans << '\n';
        
        
    }
	
	
	
	return 0;
}
