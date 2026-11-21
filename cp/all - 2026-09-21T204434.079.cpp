#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    
	    int n;
	    cin >> n;
	    
	    string a;
	    cin >> a;
	    
	    if(a[0] == '1') {
	        int cntz = 0;
	        for(int i=0; i<n; i++) if(a[i] == '0') cntz++;
	        
	        cout << cntz << endl;
	    }
	    else{
	        int cnt = 0;
    	    for(int i=1; i<n; i++){
    	        if(a[i] < a[i-1]) cnt++;
    	    }
    	    
    	    cout << cnt <<endl;
	    }
	    
	}

}
