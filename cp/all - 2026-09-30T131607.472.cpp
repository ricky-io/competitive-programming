#include <bits/stdc++.h>
using namespace std;

vector<string> ans;

void permutaions(string &s, size_t i){
    if(i == s.size()){
        ans.push_back(s);
        return;
    }
    
    set<char> c;
    for(int idx = i; idx < s.size(); idx++){
        if(c.count(s[idx])) continue;
        c.insert(s[idx]);
        
        swap(s[idx], s[i]);
        permutaions(s, i+1);
        swap(s[idx], s[i]);
    }
}

int main() {
	string s;
	cin >> s;
	
	permutaions(s, 0);
	
	cout << ans.size() << endl;
	
	for(int i=0; i<ans.size(); i++){
	    cout << ans[i] << endl;   
	}
}
