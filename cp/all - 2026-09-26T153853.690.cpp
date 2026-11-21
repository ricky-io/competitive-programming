#include <bits/stdc++.h>
using namespace std;


int main() {

	int n, m;
	cin >> n >> m;
	
	multiset<int> tickets;
	
	// input tickets :
	
	for(int i=0; i<n; i++){
	    int x;
	    cin >> x;
	    
	    tickets.insert(x);
	}
	
	 // input customers and parallely process them :: 
	 
	 for(int i=0; i<m; i++){
	     int x;
	     cin >> x;
	     
	     // checking the first ticket price strictly > cutomers bidding price;
	     
	     auto it = tickets.upper_bound(x);
	     
	     if(it == tickets.begin()){
	         cout << -1 << endl;
	     }
	     else {
	         // the ticket with nearest price ::
	         --it;
	         cout << *it << endl;
	         
	         // ticket is sold ::
	         tickets.erase(it);
	     }
	 }
	
	return 0;

}
