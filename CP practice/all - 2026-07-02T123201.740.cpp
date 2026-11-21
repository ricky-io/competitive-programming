#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	long long ans = n;
	while(n>1){
	    ans = ans*(n-1);
	    n--;
	}
	cout<<4*ans<<endl;

}
