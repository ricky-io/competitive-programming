#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	
	
	unordered_map<string , int> mp;
	for(int i=0; i<n-1; i++){
	    string st = "";
        st += s[i];
        st += s[i + 1];
        mp[st]++;
	}
	
	string ans = "";
    int mx = INT_MIN;

    for (auto &[str, val] : mp) {
        if (val > mx) {
            mx = val;
            ans = str;
        }
    }

    cout << ans << endl;
    
}
