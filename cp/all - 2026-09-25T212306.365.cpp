#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    char c;
	    cin >> c;
	    
	    string a;
	    cin >> a;
	    
	    int cnt = 0;
	    
	    int i=0; int j=n-1;
	    
	    while(i < j){
	        if(a[i] != a[j]){
	            if(a[i] != c && a[j] != c) {
	                a[i] = c;
	                a[j] = c;
	                cnt++;
	                cnt++;
	            }
	            else if(a[i] == c){
	                a[j] = c;
	                cnt++;
	            }
	            else {
	                a[i] = c;
	                cnt++;
	            }
	        }
	        i++;
	        j--;
	    }
	    
	    cout << cnt << endl;
	}
	
	return 0;

}
