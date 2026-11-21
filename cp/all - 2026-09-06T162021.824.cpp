#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(a[i] != 0) a[i] = 1;
        }
        
        int start = 1;
        
        for(int i=1; i<n; i++){
            if(a[i] != a[i-1]){
                a[start] = a[i];
                start++;
            } 
        }
        
        while(start < n) a[start++] = 0;
        
        int cnt = std::accumulate(a.begin(), a.end(), 0);
        
        cout << cnt << endl;
    }

}
