#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    string a;
	    cin >> a;
	    
	    // check if already checked:
	    
	    bool sorted = true;
	    
	    for(int i=1; i<n; i++) if(a[i] < a[i-1]){
	        sorted = false;
	        break;
	    } 
	    
	    if(sorted) {
	        cout << 0 << endl;
	        continue;
	    }
	    
	    // check if a[0] == '1':
	    
	    if(a[0] == '1'){
	        int zeroes = 0;
	        for(char c : a){
	            if(c == '0') zeroes++;
	        }
	        
	        cout << zeroes << endl;
	        continue;
	    }
	    
	    // check for general conditions:
	    
	    int rightzeroes = 0;
	    
	    // initially all are right zeroes:
	    
	    for(char c : a) if(c == '0') rightzeroes++;
	    
	    int leftones = 0;
	    int ans = n;
	    
	    for(int i=0; i<n; i++){
	        if(a[i] == '0') rightzeroes--;
	        else leftones++;
	        
	        int cnt = rightzeroes + leftones;
	        
	        ans = min(ans, cnt);
	    }
	    
	    cout << ans << endl;
	    
	    
	}

}
