#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    string s;
	    cin >> s;
	    
	    unordered_map<int, int> mp;
	    for(auto x : s) mp[x]++;
	    
	    int score = 0;
	    
	    for(auto c : mp){
	        if(c.first == '?') continue;
	        score += min(c.second, n);
	    }
	    
	    cout << score << endl;
	}

}
