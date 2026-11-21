#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    
	    int ans = 0;
	    
	    s = 'u' + s + 'u';
	    
	    for(int i=1; i < s.length(); i++){
	        if(s[i - 1] == 'u' && s[i] == 'u'){
	            s[i] = 's';
	            ans++;
	        }
	    }
	    cout<<ans<<endl;
	}

}
