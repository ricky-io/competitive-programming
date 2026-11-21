#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
    	int N;
    	cin >> N;
    	
    	vector<int> A(N);
    	
    	for(int i=0; i<N; i++){
    	    cin >> A[i];
    	}
    	
    	int ans = INT_MIN;
    
    	for(int i = 0; i < N; ++i){
    		ans = max(ans, A[(i - 1 + N) % N] - A[i]);
    	}
    
    	for(int i = 1; i < N; ++i){
    		ans = max(ans, A[i] - A[0]);
    	}
    
    	for(int i = 0; i < N - 1; ++i){
    		ans = max(ans, A[N - 1] - A[i]);
    	}
        
        cout << ans << "\n";
    }

	return 0;

}
