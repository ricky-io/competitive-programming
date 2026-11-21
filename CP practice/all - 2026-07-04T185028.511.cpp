#include <bits/stdc++.h>
using namespace std;

long long floor_div(long long a, long long b) {
    long long res = a / b;
    long long rem = a % b;
    if (rem != 0 && ((a ^ b) < 0)) {
        res--;
    }
    return res;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long x, y, k;
	    cin>>x>>y>>k;
	    long long ans = 0;
	    while(x > y){
	        x = floor_div(x , k);
	        ans++;
	    }
	    
	    cout<<ans<<endl;
	}

}
