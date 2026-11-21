#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    string a, b;
	    cin >> n >> a >> b;
	    
	    int s = 0;
	    for(int i=0; i<n; i++){
	        if((a[i] == 'f') != (b[i]=='f'))s++;
	    }
	    
	    cout <<s%2 << endl;
	}

}
