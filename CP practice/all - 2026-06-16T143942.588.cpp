#include <bits/stdc++.h>
using namespace std;

// Remove consecutive duplicatae letters:


int main() {
	string s;
	cin>>s;
	stack<char> st;
	st.push(s[0]);
	int n = 1;
	for(int i=1; i<s.length(); i++){
	   if(s[i] != st.top()) {
	       st.push(s[i]);
	        n++;
	   }

	}
	string ans = "";
	for(int i=0; i<n; i++){
	    ans+= st.top();
	    st.pop();
	}
	reverse(ans.begin(), ans.end());
	cout<<ans<<endl;
	
	return 0;

}
