#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	
	vector<long long> a(n+1);
	vector<long long> b(m+1);
	a[0] = 0;
	
	for(int i=1; i<=n; i++) {
	    long long x;
	    cin>>x;
	    a[i] = a[i-1] + x;
	}
	
	for(int j=1; j<=m; j++) cin>>b[j];
	
	int i=1; int j=1;
	
	long long range = 0;
	
	while(j<=m || i<=n){
	    if(b[j] > range && b[j] <= a[i]){
	        cout<<i<<" "<<b[j] - range<<endl;
	        j++;
	    } else{
	        range = a[i];
	        i++;
	    }
	}
	
	return 0;
	    
}