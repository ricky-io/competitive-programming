#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, m;
	cin>>n>>m;
	
	vector<int> a(n);

    int sum = 0;
    int max_sum = INT_MIN;
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        sum += x;
        max_sum = max(max_sum, sum);
    }
    
    int ans = m - max_sum;
    if(ans < 0) cout<<0<<endl;
    else cout<<ans+1<<endl;

}
