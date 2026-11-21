#include <bits/stdc++.h>
using namespace std;

// Cheff and Riffles CodeCheff 2300:

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int N;
	    long long k;
	    cin>>N>>k;
	    
	    int half = N/2;
	    
	    // base permutation = riffle once
	    vector<int> base(N+1);
	    for(int i=1; i<=N; i++){
	        if(i <= half) base[i] = 2*i - 1;
	        else base[i] = r*(i-half);
	    }
	    
	    // identity permutation result
	    vector<int> res(N+1);
	    for(int i=1; i<=N; i++) res[i] = i;
	    
	    auto compose = (vector<int> &A, vector<int> &B){
	        vector<int> C(N+1);
	        for(int i = 1; i<=N; i++) C[i] = A[B[i]];
	        return C;
	    };
	    
	    while(k>0){
	        if(k&1) res = compose(res, base); // res *= base
	        base = compose(base, base); // res *= base
	        k >>= 1;
	    }
	    
	    for(int i=1; i<=N; i++){
	        cout<< res[i] <<" ";
	    }
	    cout<<\'n';
    }

}
