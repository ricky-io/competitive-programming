#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

signed main() {
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        map<int, int> freq;
        vector<int> distinct(n, 0);

        int count = 0;

        for(int i=0; i<n; i++){
            freq[s[i]]++;
            if(freq[s[i]] == 1) count++;

            distinct[i] = count;
        }

        int ans = 0;

        for(int i=0; i<n; i++) ans += distinct[i];

        cout << ans << '\n';

         
    } 
    return 0;
}
