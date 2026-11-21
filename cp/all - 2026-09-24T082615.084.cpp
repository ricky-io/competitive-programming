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
        
        for(int i=1; i<=n; i++){
            cin >> a[i];
            
            if(i % 2 == 0) p[i] = p[i-1] + a[i];
            else p[i] = p[i-1] - a[i];
        }
        
        bool ans = false;
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<=n; j++){
                if(p[i] == p[j]) ans = true;
            }
        }
        
        
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	

}
