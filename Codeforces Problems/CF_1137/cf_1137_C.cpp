#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
        cin >> n;

        vector<int> p(n+2), l(n+2), r(n+2);

        for(int i=1; i<=n; i++) cin >> p[i];

        vector<int> st;

        for(int i=1; i<=n; i++){
            while(!st.empty() && p[st.back()] > p[i]) st.pop_back();
            l[i] = st.empty() ? 0 : st.back();
            st.push_back(i);
        }

        st.clear();

        for(int i=n; i>=1; i--){
            while(!st.empty() && p[st.back()] > p[i]) st.pop_back();
            r[i] = st.empty() ? n+1 : st.back();
            st.push_back(i);
        }

        int ans = 0;

        for(int i=1; i<=n; i++){
            int a = i-l[i];
            int b = r[i]-i;

            if(min(a,b)==1) ans += a+b-1;
            else ans += 2;
        }

        cout << ans << '\n';	    
	}
	return 0;

}
