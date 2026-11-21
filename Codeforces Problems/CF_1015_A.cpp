#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	
	vector<int> axes(m+1, 1);
	
	while(n--){
	    int l, r;
	    cin>>l>>r;
	    
	    for(int i=l; i<=r; i++){
	        axes[i] = 0;
	    }
	}
	
	int sum = std::accumulate(axes.begin(), axes.end(), 0) - 1;
	
	cout<<sum<<endl;
	for(int i=1; i<=m; i++){
	    if(axes[i] == 1) cout<<i<<" ";
	}
	
	return 0;

}
