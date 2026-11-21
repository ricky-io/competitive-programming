#include <bits/stdc++.h>
using namespace std;

// Codeforces : 1527A And then were K
// Bit Manipulation

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long p = 1;
	    while((p<<1) <= n){
	        p<<=1;
	    }
	    cout<<p-1<<endl;
	}
}
