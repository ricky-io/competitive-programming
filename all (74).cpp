#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    
	    ll n;
	    cin >> n;
	    
	    if(n%25 == 0){
	        cout << 0 << '\n';
	        continue;
	    }
	    
	    
	    string s = to_string(n);
	    
	    int o = INT_MAX;
	    
	    for(int i=0; i<(int)s.length(); i++){
	        if(s[i] == '2' || s[i] == '7'){
	            bool mila = false;
	            int cnt = 0;
	            for(int j=i+1; j<(int)s.length(); j++){
	                if(s[j] == '5'){
	                    mila = true;
	                    cnt = (j - i - 1) + (s.length() - 1 - j);
	                    break;
	                }
	            }
	            if(mila) o = min(o, cnt);
	        }
	        if(s[i] == '5' || s[i] == '0'){
	            int cnt = 0;
	            bool mila = false;
	            for(int j=i+1; j<(int)s.length(); j++){
	                if(s[j] == '0'){
	                    mila = true;
	                    cnt = (j - i - 1) + (s.length() - 1 - j);
	                    break;
	                }
	            }
	            if(mila) o = min(o, cnt);
	        }
	    }
	    
	    cout << o << '\n';
	    
	}

}
