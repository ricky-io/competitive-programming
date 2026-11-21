#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long sum = (n * (n+1)) / 2;
    
    if(sum % 2){
        cout << "NO" << endl;
        return 0;
    }
    
    vector<int> a(n);
    
    for(int i=0; i<n; i++) a[i] = i+1;
    
    vector<int> b;
    
    long long target = sum/2;
    
    for(int i=n-1; i>=0; i--){
        if(target >= a[i]){
            b.push_back(a[i]);
            target -= a[i];
            a[i] = INT_MAX;
        }
        if(target == 0) break;
    }
    
    vector<int> c;
    
    for(int i=n-1; i>=0; i--){
        if(a[i] != INT_MAX) c.push_back(a[i]);
    }
    
    int f = b.size();
    int g = c.size();
    
    cout << "YES" << endl;
    
    if(f > 0){
        cout << f << endl;
        for(int i=0; i<f; i++) cout << b[i] <<" ";
        cout << endl;
    }
    
    if(g > 0){
        cout << g << endl;
        for(int i=0; i<g; i++) cout << c[i] <<" ";
        cout << endl;
    }
    
    return 0;
    
    
    

}
