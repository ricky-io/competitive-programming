#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int x1, y1, x2, y2, x3, y3;
	    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	    
	    // cross product : 
	    
	    long long d = (x2-x1)*(y3-y1) - (y2-y1)*(x3-x1);
	    
	    if(d < 0) cout << "RIGHT" << '\n';
	    else if(d > 0) cout << "LEFT" << '\n';
	    else cout << "TOUCH" << '\n';
 	}
 	
 	return 0;

}
