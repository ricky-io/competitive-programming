#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int a, b;
	    cin >> a >> b;
	    
	    int xk, yk;
	    cin >> xk >> yk;
	    
	    int xq, yq;
	    cin >> xq >> yq;
	    
	    set<pair<int, int>> king, queen;
	    
	    vector<pair<int, int>> moves = {
	        {a, b}, {a, -b}, {-a, b}, {-a, -b},
	        {b, a}, {b, -a}, {-b, a}, {-b, -a}
	    };
	    
	    for(auto &[dx, dy] : moves){
	        king.insert({dx+xk, dy+yk});
	    }
	    
	    for(auto &[dx, dy] : moves){
	        queen.insert({dx + xq, dy + yq});
	    }
	    
	    int ans = 0;
	    
	    for(auto pos : king){
	        if(queen.count(pos)) ans++;
	    }
	    
	    cout << ans << endl;
	}

}
