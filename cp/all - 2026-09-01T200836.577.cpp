#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    string s;
	    cin >> s;
	    
	    int cons = 0;
	    for(int i=1; i<s.length(); i++){
	        if(s[i] == s[i-1]) cons++;
	    }
	    
	    if(cons == 0) cout << n << endl;
	    else cout << n - cons + 1 << endl;
	}
	
	return 0;

}
