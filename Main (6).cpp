#include <bits/stdc++.h>
using namespace std;

using ll = long long;


bool isFair(ll n) {
    ll m = n;

    while (m > 0) {
        ll digit = m % 10;

        if (digit != 0 && n % digit != 0) {
            return false;
        }

        m /= 10;
    }

    return true;
}

int main() 
{
    int t;
    cin >> t;

    while(t--){
        
        ll n;
        cin >> n;

        while(!isFair(n)) n++;

        cout << n << '\n';

    }
}