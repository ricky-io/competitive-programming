#include <bits/stdc++.h>
using namespace std;

// A. Frog 1:

int main() {
	int n;
	cin>>n;
	
	vector<long long> stone(n+1);
	for(int i=1; i<=n; i++) cin>>stone[i];
	
	vector<long long> cost(n+1);
	cost[n] = 0;
	cost[n-1] = abs(stone[n] - stone[n-1]);
	
	for(int i=n-2; i>=1; i--){
	    cost[i] = min((cost[i+1] + abs(stone[i] - stone[i+1])), (cost[i+2] + abs(stone[i] - stone[i+2])));
	}
	
	cout<<cost[1]<<endl;
	
	return 0;

}
