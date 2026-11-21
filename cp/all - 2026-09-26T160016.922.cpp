#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	map<int, int> mp;
	
	while(n--){
	    int a, b;
	    cin >> a >> b;
	    
	    mp[a]++;
	    mp[b]--;
	}
	
	int curr = 0;
	int max_el = 0;
	
	for(auto e : mp){
	    curr += e.second;
	    max_el = max(max_el, curr);
	}
	
	cout << max_el << endl;
	
	return 0;

}
