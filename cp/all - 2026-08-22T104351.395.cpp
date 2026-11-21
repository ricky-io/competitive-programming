#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int one = 0;
        int zero = 0;
        
        for(int i=0; i<s.length(); i++){
            if(s[i] == '0') zero++;
            else one++;
        }
        
        string t;
        
        for(int i=0; i<s.length(); i++){
            if(s[i] == '0' && one > 0){
                t += '1'; one--; 
            }
            
            else if(s[i] == '1' && zero > 0){
                t += '0'; zero--;
            }
            
            else break;
        }
        
        int ans = s.length() - t.length();
        
        
        
        cout << ans << endl;
    }

}
