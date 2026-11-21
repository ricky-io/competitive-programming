#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    
    int cnt = 0;
    
    for(int i=0; i<n; i++){
        if(str[i] == 'x'){
            if(i == 0 || str[i-1] == 'x'){
                if(i == n-1 || str[i+1] == 'x') cnt++;
            }
        }
    }
    
    cout<<cnt<<endl;
    
    return 0;

}
