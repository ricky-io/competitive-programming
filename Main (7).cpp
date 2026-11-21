#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	while(n--){
	    string s, t;
	    cin >> s >> t;

        stack<char> st;
        for(char c : s) st.push(c);

        int i=t.length()-1;

        bool ans = true;

        while(!st.empty() && i>=0){
            if(st.top() == t[i]){
                st.pop();
                i--;
            }
            else{
                bool found = false;
                for(int j=i; j>=0; j--){
                    if(st.top() == t[j]){
                        found = true;
                        break;
                    }
                }
                if(found){
                    ans = false;
                    break;
                }
                else {
                    st.pop();
                }
            }
        }

        if(i >= 0) ans = false;

        if(ans)
            cout << "Yes\n";
        else
            cout << "No\n";
	    

	    
	}

}
