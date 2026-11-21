#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	vector<long long> a(n);
	for(int i=0; i<n; i++){
	    int x;
	    cin>>x;
	    if(x%2 == 0) a[i] = x-1;
	    else a[i] = x;
	}
	
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
	
	return 0;

}
