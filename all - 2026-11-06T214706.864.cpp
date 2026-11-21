#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    
    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        
        for(int i=0; i<n; i++){
            cin >> a[i];
        } 
        
        sort(a.begin(), a.end());
        
        int p = 0;
        
        for(int i=0; i<n; i++){
            if(a[i] == a[n-1]) p++;
        }
        
        if(p > k){
            cout << "NO" << '\n';
        }
        
        else{
            cout <<"YES"<<'\n';
            for(int i=n-k; i<n; i++) cout << a[i] <<' ';
            for(int i=n-k-1; i>=0; i--) cout << a[i] << ' ';
            cout << '\n';
        }
        
    }
	
	return 0;
}
