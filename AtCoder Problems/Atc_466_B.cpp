#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	
	vector<vector<int>> balls(n+1, vector<int> (2));
	
	for(int i=1; i<=n; i++){
	    cin>>balls[i][0]>>balls[i][1];
	}
	
	sort(balls.begin(), balls.end());
	
	priority_queue<int> q;
    vector<int> nums(m + 1);
    
    int ptr = 1;
    
    for(int day = 1; day <= m; day++) {
    
        while(ptr <= n && balls[ptr][0] == day) {
            q.push(balls[ptr][1]);
            ptr++;
        }
    
        if(q.empty())
            nums[day] = -1;
        else
            nums[day] = q.top();
    
        while(!q.empty()) q.pop();   // only if the problem requires it
    }
    
    for(int i=1; i<=m; i++) cout<<nums[i]<<" ";
    cout<<endl;
	
	
	
	return 0;

}
