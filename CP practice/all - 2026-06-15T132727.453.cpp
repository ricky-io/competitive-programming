#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int c0 = 0; int c1 = 0; int c2 = 0;
	    for(int i=0; i<n; i++){
	        int x; cin>>x;
	        if(x == 0) c0++;
	        if(x == 1) c1++;
	        if(x == 2) c2++;
	    }
	    int ops = 0;
	    ops += c0;
	    int p = min(c1, c2);
	    c1 -= p;
	    c2 -= p;
	    ops += p;
	    ops += c1/3;
	    ops += c2/3;
	    cout<<ops<<endl;
	}

}
