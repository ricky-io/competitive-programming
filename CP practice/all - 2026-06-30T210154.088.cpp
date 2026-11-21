#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
    	int x;
    	cin>>x;
    	int sum = 0;
    	int cnt = 0;
    	while(x>0){
    	    sum += x%10;
    	    cnt++;
    	    x = x/10;
    	}
    	int ans = sum + cnt*3;
    	cout<<ans<<endl;
	}
    return 0;
}
