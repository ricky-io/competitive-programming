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
        
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            
            a[i] = (1LL << x);
        } 
        
        sort(a.rbegin(), a.rend());
        
        int b = 0;
        int h = 0;
        
        for(int i=0; i<n; i++){
            if(b <= h) b += a[i];
            else h += a[i];
        }
        
        cout << b*h << '\n';
        
    }
	
	return 0;
}