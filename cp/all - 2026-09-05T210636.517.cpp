#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        
        for(int i=0; i<n; i++) cin >> a[i];

        int i=0; int j=n-1; bool leftone = false; bool rightone = false;
        
        while(i <= j){
            if(a[i] == -1 && !leftone){
                a[i] = 1;
                leftone = true;
            } else if(a[i] == 1 && !leftone) leftone = true;
            else a[i] = 0;
            
            if(a[j] == -1 && !rightone){
                a[j] = 1;
                rightone = true;
            } else if(a[j] == 1 && !rightone) rightone = true; 
            else a[j] = 0;
            
            i++;
            j--;
        }
        
        for(int i=0; i<n; i++) cout << a[i] <<" ";
        
        cout << endl;
    }

    return 0;
}