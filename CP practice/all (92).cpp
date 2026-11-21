#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto& x : a) cin >> x;
        
        int ans = INT_MAX;
        for(int T : a){
            int L = 0, R = 0;
            for(int x : a){
                if(x < T) L++;
                else if(x > T) R++;
            }
            ans = min(ans, max(L, R));
        }
        cout << ans << "\n";
    }
    return 0;
}
