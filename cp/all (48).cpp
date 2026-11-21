#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	
	vector<int> a(n+1);
	vector<int> b(n);
	
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<n; i++) cin>>b[i];
	
	int ops = 0;
	
	for(int i=1; i<n; i++){
	    if((a[i] == a[i+1]) && b[i] != 0){
	        a[i+1] += 1; ops++;	    
	    } 
	    else if((a[i] != a[i+1]) && b[i] != 1){
	        a[i+1] += 1; ops++;
	    }
	}
	
	cout<<ops<<endl;
}
