#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        string s;
        cin>>s;
        
        int rc = 0;
        int bc = 0;
        
        bool ans = true;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == 'R')
                rc++;
            else if (s[i] == 'B')
                bc++;
            else {
                if (rc + bc > 0 && (rc == 0 || bc == 0))
                    ans = false;
        
                rc = 0;
                bc = 0;
            }
        }
        
        if (rc + bc > 0 && (rc == 0 || bc == 0))
            ans = false;
        
        if(ans) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}