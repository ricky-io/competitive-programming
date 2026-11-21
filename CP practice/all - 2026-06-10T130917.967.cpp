#include <bits/stdc++.h>
using namespace std;

// Codeforces : 579A Raising Bacteria
// Bit Manipulation

int main() {
	long long n;
	cin>>n;
	int count = 0;
	while(n){
	    n = n & (n-1);
	    count++;
	}
	cout<<count<<endl;
	return 0;
}
