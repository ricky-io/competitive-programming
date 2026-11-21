#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        long long x, y;
        cin >> x >> y;
    
        long long S = x + y;
    
        long long a = 0;
    
        for (int bit = 62; bit >= 0; bit--) {
            if ((S >> bit) & 1LL) {
                long long candidate = a | (1LL << bit);
    
                if (candidate <= x) {
                    a = candidate;
                }
            }
        }
    
        long long operations = x - a;
    
        cout << S << " " << operations << '\n';
        
    }
    

    return 0;
}