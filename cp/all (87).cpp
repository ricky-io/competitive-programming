#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    
    sort(a.begin(), a.end());
    
    int cnt = 1;
    bool found = false;
    
    for(int i=1; i<n; i++){
        if(a[i] - a[i-1] <= 2 && a[i] != a[i-1]) cnt++;
        else cnt = 1;
        
        if(cnt >= 3) found = true;
    }
    
    cout << (found ? "YES" : "NO") << endl;
    
    return 0;

}
