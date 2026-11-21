#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    string s;
	    cin >> s;
	    
	    int c0 = 0;
	    int c1 = 0;
	    
	    for(int i=0; i<s.length(); i++){
	        if(s[i] == '0') c0++;
	        else c1++;
	    }
	    
	    int x = min(c0, c1);
	    
	    cout << (x%2 != 0 ? "DA" : "NET") << '\n';
	}
	
	return 0;

}
