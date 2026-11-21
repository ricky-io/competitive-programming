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
        
        sort(a.begin()+1, a.end());
        
        vector<int> pref(n+1, 0LL);
        vector<int> suf(n+2, 0LL);
        
        for(int i=1; i<=n; i++){
            pref[i] = pref[i-1] + a[i];
        }
        
        for(int i=n; i>=1; i--){
            suf[i] = suf[i+1] + a[i];
        }
        
        int best = 0;
        
        for(int i=1; i<=n; i++){
            int curr = pref[i] * suf[i+1];
            
            best = max(curr, best);
        }
        
        cout << best << '\n';
        
    }
	
	return 0;
}
