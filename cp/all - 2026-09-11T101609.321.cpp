#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long k, n;
    cin >> n >> k;
    
    long long x, a, b, c;
    cin >> x >> a >> b >> c;
    
    vector<long long> v(n);
    
    v[0] = x;
    
    for(int i=1; i<n; i++){
        v[i] = (v[i-1] * a + b) % c;
    }
    
    long long result = 0;
    long long ans = 0;
    
    for(int i=0; i<k; i++){
        result = result ^ v[i];
    }
    
    ans = result;
    
    int j = k;
    
    for(int i=0; j<n; i++, j++){
        result = (result ^ v[i]) ^ v[j];
        ans = ans ^ result;
    }
    
    cout << ans << endl;

}
