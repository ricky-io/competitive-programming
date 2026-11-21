#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        if(n%2 ==0 ){
            int x = n/2;
            
            cout << x*x << '\n';
            
        }
        
        else {
            int x = n/2;
            int y = (n+2-1)/2;
            
            cout << x * y << '\n';
        }
    }
	
	
	
	return 0;
}
