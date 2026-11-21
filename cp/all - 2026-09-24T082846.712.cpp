#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    
    ll t;
    cin >> t;
    
    while(t--){
        ll n;
        cin >> n;
        
        vector<ll> a(n+1);
        
        vector<ll> p(n+1);
        p[0] = 0;
        
        set<ll> seen;
        seen.insert(0);
        
        bool ans = false;
        
        for(int i=1; i<=n; i++){
            cin >> a[i];
            
            if(i % 2 == 0) p[i] = p[i-1] + a[i];
            else p[i] = p[i-1] - a[i];
            
            if(seen.count(p[i])) ans = true;
            
            seen.insert(p[i]);
        }
        
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	

}
