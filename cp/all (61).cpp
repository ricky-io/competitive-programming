#include <bits/stdc++.h>
using namespace std;

// B. Frog 2:

int main() {
	int n, k;
	cin >> n >> k;
	
	vector<long long> stone(n+1);
	for(int i=1; i<=n; i++) cin>>stone[i];
	
	vector<long long> cost(n+1, INT_MAX);
	cost[1] = 0;
	
	for(int i=2;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(i - j >= 1){
                cost[i]=min(
                cost[i],
                cost[i-j] + abs(stone[i]-stone[i-j]));
            }
        }
    }
	
	cout<<cost[n]<<endl;
	
	return 0;

}
