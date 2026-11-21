#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char col;
    cin>>col;
    int c;
    if(col == 'A') c = 0;
    else if(col == 'B') c = 1;
    else if(col == 'C') c = 2;
    else if(col == 'D') c = 3;
    else c = 4;
    bool ans = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            char x;
            cin>>x;
            if(j == c && x == 'o') ans = true;
        }
    }
    if(ans) cout<<"Yes";
    else cout<<"No";
    
    
}
