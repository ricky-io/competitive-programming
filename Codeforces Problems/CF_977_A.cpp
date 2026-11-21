#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n, k;
	cin>>n>>k;;
	
	while(n>0 && k--){
	    if(n%10 == 0) n = n/10;
	    else n = n-1;
	}
	cout<<n<<endl;

}
