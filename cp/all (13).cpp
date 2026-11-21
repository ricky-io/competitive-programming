#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	bool pos = true;
	for(int i=0; i<n; i++){
	    int x;
	    cin>>x;
	    if(x >= 0) pos = false;
	}
	
	if(pos) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	
	return 0;

}
