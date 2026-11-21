#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        if(n <= 3){
            cout << -1 << '\n';
            continue;
        }
        
        vector<int> a(n+1);
        
        for(int i=1; i<=n; i++){
            a[i] = i;
        }
        
        swap(a[1], a[4]);
        
        
        for(int i=1; i<=n; i++){
            cout << a[i] << ' ';
        }
        cout << '\n';
        
        
    }
    
    return 0;

}
