#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    int len = 0;
	    int ans = INT_MAX;
	    
	    for(int i=0; i<n; i++){
	        if(s[i] == '*'){
	            int res = (len + 2 -1)/2;
	            ans = min(ans, res);
	            len = 0;
	        }
	        else len++;
	    }
	    ans = (len + 2 -1)/2;
	    
	    cout<<ans<<endl;
	}

}
