#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin>>q;
	while(q--){
	    string s;
	    string t;
	    cin>>s>>t;
	    
	    int x = s.length();
	    int y = t.length();
	    
	    int ans = 0;
	    
	    for(int i=0; i<s.length() && i<t.length(); i++){
	        if(s[i] != t[i]) break;
	        ans++;
	    }
	    
	    int result;
	    if(ans == 0) result = ans + x - ans + y - ans;
	    else result = ans + x - ans + y - ans + 1;
	    cout<<result<<endl;
	    
	}
    return 0;
}
