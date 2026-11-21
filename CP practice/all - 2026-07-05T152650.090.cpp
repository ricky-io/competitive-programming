#include <bits/stdc++.h>
using namespace std;

// Correct but TLE after 4 test cases : 

bool calc(long long a, long long b, long long c){
    bool ans = true;
    while(c > 0){
        if(a%10 > c%10 || b%10 < c%10) ans = false;
        a /= 10;
        b /= 10;
        c /= 10;
    }
    return ans; 
}


long long solve(vector<vector<long long>> &strs, long long a, long long b){
    long long res = 0;
    for(int i=0; i<strs.size(); i++){
        if(strs[i][0] <= b && strs[i][0] >= a){
            long long c = strs[i][0];
            if(calc(a, b, c))  res += strs[i][1];
        }
    }
    return res;
}



int main() {
    long long n;
    cin>>n;
    vector<vector<long long>> strs(n, vector<long long> (2));
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        long long p = stoi(s);
        long long q;
        cin>>q;
        strs[i][0] = p;
        strs[i][1] = q;
    }
    
    
    int Q;
    cin>>Q;
    while(Q--){
        string x, y;
        cin>>x>>y;
        long long a, b;
        a = stoi(x);
        b = stoi(y);
        
        long long ans = solve(strs, a, b);
        cout<<ans<<endl;
    }
    
    return 0;
    
}
