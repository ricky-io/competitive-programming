#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int pairs = 0;

        for(int i=0; i<n; i++){
            if(i%2 == 0) {
                if(abs(a[i] - a[i+1]) < 2) pairs++;
            }
        }

        cout << pairs << endl;
    }
    return 0;
}