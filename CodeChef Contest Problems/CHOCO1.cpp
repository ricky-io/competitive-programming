#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int l, b;
	    cin>>l>>b;
	    
	    while(b!=0){
	        int r = l%b;
	        l = b;
	        b = r;
	    }
	    cout<<l<<endl;
	}

}
