#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> eli(n+1);
	for(int i=1; i<=n; i++) cin>>eli[i];
	
	vector<vector<int>> ans;
	
	for (int k = 1; k <= n; k++) {
        int el = eli[k];
    
        bool placed = false;
    
        for (int i = 0; i < ans.size(); i++) {
            if (el > ans[i].back()) {
                ans[i].push_back(el);
                placed = true;
                break;
            }
        }
    
        if (!placed) {
            ans.push_back({el});
        }
    }
	vector<int> a;
	for(int i=0; i<ans.size(); i++){
	    a.push_back(ans[i].size());
	}
	sort(a.rbegin(), a.rend());
	int sum;
	if(a.size() < 2) sum = a[0];
	else sum = a[0] + a[1];
	
	cout<<sum<<endl;
	
	return 0;
}
