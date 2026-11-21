#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    
    vector<int> a(n);
    
    for(int i=0; i<n; i++) cin>>a[i];
    
    int i=0; int j = n-1;
    int cnt = 0;
    while(i <= j){
        if(a[i] > k && a[j] > k) break;
        if(a[i] <= k) {
            i++;
            cnt++;
        } 
        else if(a[j] <= k) {
                j--;
                cnt++;
        }
    }
    
    cout<<cnt<<endl;
    
    return 0;
}