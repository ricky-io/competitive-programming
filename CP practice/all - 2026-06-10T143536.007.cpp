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
	    int cnt = n;
	    while(n){
	        n = n & (n - 1);
	        cnt--;
	    }
	    cout<<cnt<<endl;
	}
}
