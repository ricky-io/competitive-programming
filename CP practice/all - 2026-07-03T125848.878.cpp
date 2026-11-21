#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin>>q;
	while(q--){
	    
	    long long l;
	    long long r;
	    cin>>l>>r;
	    
	    int ans = 0;
	    for(int i=0; l <= r; i++){
	        l = l + i;
	        ans++;
	    }
	    cout<<ans-1<<endl;
	}
    return 0;
}
