#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    
	    vector<int> a(n+1);
	    a[0] = -1;
	    for(int i=1; i<=n; i++) cin>>a[i];
	    
	    sort(a.begin(), a.end());
	    
	    int sum = 0;
	    
	    for(int i=n-k+1; i<=n; i++) sum+=a[i];
	    
	    for(int i=1; i<=n-k; i++) sum-=a[i];
	    
	    reverse(a.begin(), a.end());
	    
	    int sum2 = 0;
	    
	    for(int i=n-k; i<n; i++) sum2-=a[i];
	    
	    for(int i=0; i<n-k; i++) sum2+=a[i];
	    
	    
	    cout<<max(sum, sum2)<<endl;
	    
	    
	}

}
