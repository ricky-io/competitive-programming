#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    string s;
	    cin >> s;
	    
	    int cnt_ab = 0;
	    int cnt_ba = 0;
	    
	    if(s.length() == 1) {
	        cout << s << '\n';
	        continue;
	    }
	    
	    for(int i=1; i<s.length(); i++){
	        if(s[i] == 'a' && s[i-1] == 'b') cnt_ba++;
	        if(s[i] == 'b' && s[i-1] == 'a') cnt_ab++;
	    }
	    
	    if(cnt_ab == cnt_ba) {
	        cout << s << '\n';
	        continue;
	    }
	    
	    string r = s;
	    if(s[0] == 'a') r[0] = 'b';
	    else r[0] = 'a';
	    
	    cout << r << '\n';
	    
	}

}
