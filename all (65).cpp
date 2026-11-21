#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if((2*b-c) > 0 && (2*b-c)%a == 0){
	        cout << "Yes" << '\n';
	    }
	    
	    else if((a+c) > 0 && (a+c)%(2*b) == 0){
	        cout << "Yes" << '\n';
	    }
	    
	    else if((2*b-a) > 0 && (2*b-a) % c == 0){
	        cout << "Yes" << '\n';
	    }
	    
	    else cout << "No" << '\n';
	}
	
	return 0;

}
