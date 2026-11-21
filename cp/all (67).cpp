#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	
	long long ans = 0;
    int n = s.size();
    
    for(int c = 0; c < n; c++) {
        int l = c, r = c;
        int mis = 0;
    
        while(l >= 0 && r < n) {
            if(s[l] != s[r]) mis++;
            if(mis > 1) break;
            ans++;
            l--;
            r++;
        }
    }
    
    for(int c = 0; c + 1 < n; c++) {
        int l = c, r = c + 1;
        int mis = 0;
    
        while(l >= 0 && r < n) {
            if(s[l] != s[r]) mis++;
            if(mis > 1) break;
            ans++;
            l--;
            r++;
        }
    }

    cout << ans << endl;
    
    return 0;

}
