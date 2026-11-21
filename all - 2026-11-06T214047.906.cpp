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
        set<int> s;
        
        for(int i=0; i<n; i++){
            cin >> a[i];
            s.insert(a[i]);
        } 
        
        if(k==1 && s.size() != n){
            cout << "NO" << '\n';
            continue;
        }
        
        sort(a.rbegin(), a.rend());
        reverse(a.begin()+1, a.begin()+1+k);
        
        int pleasants = 0;
        int avg = 0;
        
        for(int i=0; i<n; i++){
            if(a[i]*(i) >= avg) pleasants++;
            avg += a[i];
        }
        
        if(pleasants >= k){
            cout << "YES" << '\n';
            for(int i=0; i<n; i++) cout << a[i] << ' ';
            cout << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
        
    }
	
	return 0;
}
