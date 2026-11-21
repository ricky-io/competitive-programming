#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n = stoi(s);
	    
	    int x = sqrt(n);
	    
	    int y = x/2;
	    int z = x - y;
	    
	    if(x*x == n)cout<<y<<" "<<z<<endl;
	    else cout<<-1<<endl;
	}
	return 0;

}
