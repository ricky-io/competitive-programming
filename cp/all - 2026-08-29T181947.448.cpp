#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	
	vector<vector<int>> stud(k+1);
	
	for(int i=1; i<=n; i++){
	    int x;
	    cin >> x;
	    
	    stud[x].push_back(i);
	}
	int score = stud[1].size();
	int ans = 1;
	
	for(int i=2; i<=k; i++){
	    int y = stud[i].size();
	    if(score <= y){
	        score = y;
	        ans = i;
	    } 
	}
	
	cout << ans << endl;

}
