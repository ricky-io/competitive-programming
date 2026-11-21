#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() 
{
    int t;
    cin >> t;

    while(t--){
        ll a, b;
        cin >> a >> b;

        ll x = min(a, b);
        ll y = max(a, b);

        if(a == b){
            cout << 0 << '\n';
            continue;    
        } 

        int cnt = 0;

        while(y > x){
            if(y/8 >= x && y%8==0){
                y = y/8;
                cnt++;
            }
            else if(y/4 >= x && y%4==0){
                y = y/4;
                cnt++;
            }
            else if(y/2 >= x && y%2==0){
                y = y/2;
                cnt++;
            }

            else break;            
        }

        if(x != y) {
            cout << -1 << '\n';
        }
        else cout << cnt << '\n';

        
    }
}