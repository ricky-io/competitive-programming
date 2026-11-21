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
        
        int i = 0;
        int cnt = 0;
        
        while(i < n){
            if(a[i] == 0){
                i++;
            }
            else{
                while(i < n && a[i] == 1) i++;
                cnt++;
                i++;
            }
        }
        
        cout << cnt << endl;
    }

}
