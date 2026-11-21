#include <bits/stdc++.h>
using namespace std;


int main() {

	int n;
	cin >> n;
	
	unordered_map<int, int> mp;
	
	while(n--){
	    int a, b;
	    cin >> a >> b;
	    
	    for(int i=a; i<=b; i++) mp[i]++;
	}
	
	int max_el = -1;
	
	for(auto e : mp){
	    max_el = max(max_el, e.second);
	}
	
	cout << max_el << endl;
	
	return 0;

}
