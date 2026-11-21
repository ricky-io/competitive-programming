#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
    	int n;
    	cin >> n;
    	
    	vector<int> v(n);
    	
    	for(int i=0; i<n; i++){
    	    cin >> v[i];
    	}
    	
        int diff = *std::max_element(v.begin(), v.end()) - *std::min_element(v.begin(), v.end());
        
        cout << diff << "\n";
    }

	return 0;

}
