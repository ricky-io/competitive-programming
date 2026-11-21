#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int r, y;
        cin>>r>>y;
        
        
    int ans = 0;
    int yellow = 0;
    
        while(r>0){
            if(yellow == 1 && y>0){
                y--;
                ans++;
                yellow = 0;
            }
            
            if(yellow == 0 && y > 0){
                y--;
                yellow = 1;
            }
            
            r--;
            ans++;
            yellow = 0;
        }
        
        ans += (yellow + y)/2;
        cout<<ans<<endl;
    }
    return 0;
}
