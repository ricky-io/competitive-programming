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
	    
	    int cn1 = 0;
	    int cn2 = 0;
	    
	    int curr1 = 0;
	    int curr2 = 0;
	    
	    for(int i=0; i<n; i++){
	        if(s[i] == '<'){
	            curr1++;
	            curr2 = 0;
	        }
	        else {
	            curr2++;
	            curr1 = 0;
	        }
	        cn1 = max(curr1, cn1);
	        cn2 = max(curr2, cn2);
	    }
	    
	    
	    cout << max(cn1, cn2) + 1 << endl;
	}

}
