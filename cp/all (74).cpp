#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; int m;
	cin >> n >> m;
	
	vector<int> nums(n+1, 0);
	
	for(int i=1; i<=m; i++){
	    int x; int y;
	    cin >> x;
	    nums[x]++;
	    nums[y]++;
	}
	
	sort(nums.begin(), nums.end());
	int cnt = 0;
	for(int i=0; i<=n; i++){
	    if(nums[i] >= 2) cnt++;
	}
	
	cout<<cnt-1<<endl;
	
	return 0;

}
