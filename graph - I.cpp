#include <bits/stdc++.h>
using namespace std;

/// Graph I --> CSES Sheet

using ll = long long;
const ll MOD = 1000000007;

struct Matrix{
    vector<vector<ll>> a;
    int n;
    Matrix(int n) : n(n){
        a.assign(n, vector<ll>(n, 0));
    }
};

// Multiply two matrixes:
Matrix multiply(const Matrix &A, const Matrix &B){
    int n = A.n;
    Matrix C(n);
    
    for(int i=0; i<n;  i++){
        for(int k=0; k<n; k++){
            if(A.a[i][k] == 0) continue;
            for(int j=0; j<n; j++){
                C.a[i][j] = (C.a[i][j] + A.a[i][k] * B.a[k][j]) % MOD;
            }
        }
    }
    return C;
}

// Fast matrix exponentiation
Matrix matrix_pow(Matrix base, ll exp){
    int n = base.n;
    Matrix result(n);
    
    // Identity Matrix
    for(int i=0; i<n; i++){
        result.a[i][i] = 1;
    }
    
    while(exp > 0){
        if(exp & 1)
            result = multiply(result, base);
        base = multiply(base, base);
        exp>>= 1;
    }
    return result;
    
}

int main() {
	// your code goes here
	
	int n,, m;
	long long k;
	cin>>n>>m>>k;
	
	Matrix M(n);
	
	for(int i=0; i<m; i++){
	    int u, v;
	    cin>>u>>v;
	    u--; v--;
	    M.a[u][v] = (M.a[u][v] +1) % MOD;
	}
	
	Matrix Mk = matrix_pow(M, k);
	
	// Initial state: s(0) = [1, 0, 0, ....]
	// we want S(k)[n-1]
	ll answer = Mk.a[0][n-1];
	cout<<answer<<"\n";
	
	return 0;

}
