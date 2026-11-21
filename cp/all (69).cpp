#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	string t;
	
	cin >> s >> t;
	
	string a = s; string b = t;
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	if(a != b) {
	    cout<< -1 << endl;
	    return 0;
	}
	
	vector<int> ans;
	for(int i=0; i<n; i++){
	    if(s[i] == t[i]) continue;
	    
	    int j = i+1;
	    while(t[i] != s[j]) j++;
	    
	    while(j > i) {
	        swap(s[j], s[j-1]);
	        ans.push_back(j);
	        j--;
	    }
	}
	
	cout<<ans.size()<<endl;
	for(int x : ans) cout<< x << " ";
	
	cout<<endl;
	
	return 0;

}
