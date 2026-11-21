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
	    
	    ll m = n;
	    int ops = 0;
	    
	    bool found = false;
	    
	    while(m > 24){
	        if(m % 25 == 0){
	            cout << ops << '\n';
	            found = true;
	            break;
	        }
	        ops++;
	        m /= 10;
	    }
	    
	    if(found) continue;
	    
	    string s = to_string(n);
	    
	    int o = INT_MAX;
	    
	    for(int i=0; i<s.length(); i++){
	        if(s[i] == '2' || s[i] == '7'){
	            int cnt = 0;
	            for(int j=i+1; j<s.length(); j++){
	                if(s[j] == '5'){
	                    o = min(o, cnt);
	                    break;
	                }
	                cnt++;
	            }
	        }
	        if(s[i] == '5' || '0'){
	            int cnt = 0;
	            for(int j=i+1; j<s.length(); j++){
	                if(s[j] == '0'){
	                    o = min(o, cnt);
	                    break;
	                }
	                cnt++;
	            }
	        }
	    }
	    
	    cout << o << '\n';
	    
	}

}
