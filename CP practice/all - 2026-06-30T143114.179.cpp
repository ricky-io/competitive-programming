#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, k;
	cin>>n>>m>>k;
	
	vector<int> des(n), apar(m);
	for(int i=0; i<n; i++) cin>>des[i];
	for(int i=0; i<m; i++) cin>>apar[i];
	
	sort(des.begin(), des.end());
	sort(apar.begin(), apar.end());
	
	int ans = 0;
	int j = 0;
	int i = 0;
	while(i<n && j<m){
	    
	    if(apar[j] < des[i] - k) j++;
	    
	    if(apar[j] > des[i] + k) i++;
	    
	    else {
	        ans++;
	        i++;
	        j++;
	    }
	    
	}
	cout<<ans<<endl;
	return 0;

}
