#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, l, d;
	    cin >> n >> l >> d;
	    
	    vector<int> a(n);
	    
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	    }
	    
	    int number_of_cycles = d / l;
	    int sum = number_of_cycles * n;
	    
	    if(d % l == 0){
	        cout << sum << endl;
	        continue;
	    }
	    
	    
	    if(number_of_cycles % 2 == 0){ // even;
	        for(int i=0; i<n; i++){
	            if(a[i] <= (d%l)) sum++;
	        }
	    }
	    else {
	        for(int i=n-1; i >= 0; i--){
	            if(a[i] >= l - (d%l)) sum++;
	        }
	    }
	    
	    cout << sum << endl;
	}
 
}