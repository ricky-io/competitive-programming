#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	    }
	    
	    // step 1 : sort the array 
	    sort(a.begin(), a.end());
	    
	    // step 2 : make a another array and fill it 
	    vector<int> b(n);
	    
	    int i=0; int j = n/2; int k = 0;
	    while(i < n/2 && j < n){
	        b[k++] = a[i++];
	        b[k++] = a[j++];
	    }
	    if(j < n-1) b[k] = b[j]; 
	    
	    // step 3 : check for array to be right or not:
	    
	    bool ok = true;
	    for(int i=1; i<n-1; i+=2){
	        if(b[i] > b[i-1] && b[i] > b[i+1]) continue;
	        else{
	            ok = false;
	            break;
	        }
	    }
	    
	    if(!ok){
	        cout << "No" <<endl;
	        
	    } else {
	        cout << "Yes" << endl;
	        for(int i=0; i<n; i++) cout << b[i] << " ";
	        cout << endl;
	    }
	    
	}

}
