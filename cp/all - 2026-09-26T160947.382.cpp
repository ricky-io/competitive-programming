#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	vector<pair<int, int>> mvs(n);
	
	while(n--){
	    
	    cin >> mvs[n].first >> mvs[n].second;
	}
	
	// sort by ending time :: 
	
	sort(mvs.begin(), mvs.end(), [](auto &x, auto &y) {return x.second < y.second; });
	
	int lastend = 0;
	int cnt = 0;
	
	for(auto e : mvs){
	    int start = e.first;
	    
	    if(start >= lastend){
	        cnt++;
	        lastend = e.second;
	    }
	}
	
	cout << cnt << endl;
	
	
	
	return 0;

}
