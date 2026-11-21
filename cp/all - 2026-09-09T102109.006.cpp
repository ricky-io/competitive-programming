#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long sum = (n * (n+1)) / 2;
    
    if(sum % 2){
        cout << "NO" << endl;
        return 0;
    }
    
    vector<long long> a(n);
    
    for(long long i=0; i<n; i++) a[i] = i+1;
    
    vector<long long> b;
    
    long long target = sum/2;
    
    for(long long i=n-1; i>=0; i--){
        if(target >= a[i] && target-a[i] >= 0){
            b.push_back(a[i]);
            target -= a[i];
            a[i] = LLONG_MAX;
        }
        if(target == 0LL) break;
    }
    
    vector<long long> c;
    
    for(long long i=n-1; i>=0; i--){
        if(a[i] != LLONG_MAX) c.push_back(a[i]);
    }
    
    long long f = b.size();
    long long g = c.size();
    
    cout << "YES" << endl;
    
    if(f > 0LL){
        cout << f << endl;
        for(long long i=0; i<f; i++) cout << b[i] <<" ";
        cout << endl;
    }
    
    if(g > 0LL){
        cout << g << endl;
        for(long long i=0; i<g; i++) cout << c[i] <<" ";
        cout << endl;
    }
    
    return 0;
    
    
    

}
