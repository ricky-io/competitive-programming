#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> st;

        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                st.push_back(i+1);
            }
            else if(s[i] == '2'){
                if(!st.empty()) st.pop_back();
            }
        }

        cout << st.size() << '\n';
        for(size_t i=0; i<st.size(); i++) {
            if(i) cout << ' ';
            cout << st[i];
        }
    }
    return 0;
}