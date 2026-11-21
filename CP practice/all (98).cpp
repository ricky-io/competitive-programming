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
	    int edits = 0;
	    if(n < 3){
	        cout<<0<<endl;
	        return;
	    }
	    for(int i=2; i<n-2; i++){
	        if(s[i] == s[i-1] == s[i-2]){
	            edits++;
	            i+=2;
	        }
	    }
	    cout<<edits<<endl;
	}

}

