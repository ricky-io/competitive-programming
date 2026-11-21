#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x == 0) cout<<9<<endl;
	    else if(x%9 != 0) cout<<0<<endl;
	    else cout<<10<<endl;
	}

}
