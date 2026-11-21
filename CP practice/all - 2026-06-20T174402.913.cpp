#include <bits/stdc++.h>
using namespace std;

int main() {
    long long  x;
    long long  y;
    cin>>x>>y;
    
    if(x%16 == 0 && y%9 == 0 && x/16 == y/9) cout<<"Yes";
    else cout<<"No";
    
    return 0;
}
