#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

signed main() {
    int t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s;

        s += s;  // for calculating number of consecutive ones, including ends and beginings :

        int ones = 0;

        int curr = 0;
        int best = 0;


        for(int i=0; i<s.length(); i++){
            if(s[i] == '1') curr++;
            else curr = 0;

            best = max(curr, best);
        }

        int n = s.length()/2;

        if(best > n){
            cout << n*n << '\n';
            continue;
        }

        int a = (best+1)/2;
        int b = (best+2)/2;

        cout << a*b << '\n';

         
    } 
    return 0;
}
