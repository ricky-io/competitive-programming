#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	int loss = 0;
	
	while(t--){
	    int x, y;
	    string reply;
	    cin>>x>>y>>reply;
	    
	    if(reply == "keep") loss += (y-x);
	}
	cout<<loss<<endl;
}
