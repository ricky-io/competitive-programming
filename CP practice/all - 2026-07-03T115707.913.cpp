#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n, a, b, c;
	    cin>>n>>a>>b>>c;
	    
	    long long r = (n + (a + b + c) - 1)/ (a + b + c);
	    
	    long long ans = (a + b + c) * (r-1);
	    
	    if(ans >= n) cout<<(r-1)*3<<endl;
	    else if(ans + a >= n) cout<<(r-1)*3 + 1<<endl;
	    else if(ans + a + b >= n) cout<<(r-1)*3 + 2<<endl;
	    else cout<<r*3<<endl;
	    
	}
    return 0;
}
