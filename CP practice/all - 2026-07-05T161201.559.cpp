#include <bits/stdc++.h>
using namespace std;

bool calc(string a, string b, string c){
    bool ans = true;
    for(int i=0; i<6; i++){
        if(a[i] > c[i] || b[i] < c[i]){
            ans = false;
            break;
        }
    }
    return ans; 
}


long long solve(vector<string> &strs, string a, string b, vector<long long> &ids){
    long long res = 0;
    for(int i=0; i<strs.size(); i++){
        if(strs[i][0] <= b[0] && strs[i][0] >= a[0]){
            if(calc(a, b, strs[i]))  res += ids[i];
        }
    }
    return res;
}



int main() {
    long long n;
    cin>>n;
    vector<string> strs(n);
    vector<long long> ids(n);
    for(int i=0; i<n; i++){
        cin>>strs[i];
        cin>>ids[i];
    }
    
    
    int Q;
    cin>>Q;
    while(Q--){
        string x, y;
        cin>>x>>y;
        
        long long ans = solve(strs, x, y, ids);
        cout<<ans<<endl;
    }
    
    return 0;
    
}
