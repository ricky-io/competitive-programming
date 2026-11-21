#include <bits/stdc++.h>
using namespace std;

int main() {
	long long Q;
	int V;
	cin >> Q >> V;
	
	priority_queue<pair<long long, int>> pq;
	
	while(Q--){
	    int type;
	    cin >> type;
	    if(type == 1){
	        int tq, wq;
	        cin >> tq, wq;
	        pq.push({wq, tq});
	        
	    }
	    else {
	        int tq;
	        cin >> tq;
	        if(pq.empty()){
	            cout << -1 << endl;
	            break;
	        }
	        int wq = pq.top().first;
	        int inc = tq - pq.top().second;
	        int res = (wq + inc > V) ? V : wq+inc;
	        cout << res << endl;
	        pq.pop();
	    }
	}
	return 0;

}
