#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> strs(26, INT_MAX);
	for(int i=0; i<n; i++){
	    string s;
	    cin>>s;
	    
	    vector<int> freq(26, 0);
	    for(char c : s) freq[c- 'a']++;
	    
	    for(int j=0; j<26; j++) strs[j] = min(strs[j], freq[j]);
	}
	
	string ans;
	
	for(int i=0; i<26; i++){
	    ans.append(strs[i], char('a' + i));
	}
	
	if(ans.empty()) cout<<"no such string"<<endl;
	else cout<<ans<<endl;
	return 0;
	
	
	

}
