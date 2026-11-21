#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ll n;
    cin >> n;

    ll p = 1;

    for (int i = 0; i < n - 3; i++) {
        p *= 4;
    }

    ll ans = 3 * (3 * n - 1) * p;

    cout << ans << '\n';
    
    return 0;
}